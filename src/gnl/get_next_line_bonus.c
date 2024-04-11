/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:20 by szhong            #+#    #+#             */
/*   Updated: 2024/01/09 18:12:36 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

static char	*init_stash(char **extra_buff);
static char	*read_and_extract(int fd, char *stash, char *buff);
static char	*clean_stash(char *stash, char **extra_buff);
static void	free_up(char *stash, char *buff);

/**
 * @brief Read the next line from a file descriptor
 *
 * This function reads a line from the specified file descriptor (fd)
 * It uses a buffer (`buff`) to store read data, a static array (`extra_buff`)
 * to store any remaining characters from previous calls for each fd, and
 * a stash to temorarily store partial content in lines
 *
 * @param	fd The file descriptor to read (0 to 1023).
 * @return	A dynamically allocated string containing the next line,
 * 		or NULL if an error occurs or the end of the file is reached.
 */
char	*get_next_line(int fd)
{
	char		*buff;
	char		*stash;
	char		*result;
	static char	*extra_buff[1024];

	if (fd > 1023 || fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	stash = init_stash(&(extra_buff[fd]));
	while (1)
	{
		if (stash && get_strchr(stash, '\n'))
			break ;
		stash = read_and_extract(fd, stash, buff);
		if (!stash || get_strchr(stash, '\n'))
			break ;
	}
	result = clean_stash(stash, &(extra_buff[fd]));
	free_up(stash, buff);
	return (result);
}

/**
 * @brief Initialise the stash with any remaining characters from extra buffer.
 *
 * This function initialises the stash with any remaining characters stored
 * in the given variable extra_buff. If the extra_buff is not empty, it sets 
 * to NULL after assigning its value to the stash.
 *
 * @param 	extra_buff A pointer to a char variable for remaining characters
 * @return	A pointer to the initialised stash. NULL if no characters exit
 * 		 
 */
static	char	*init_stash(char **extra_buff)
{
	char	*stash;

	stash = NULL;
	if (*extra_buff)
	{
		stash = *extra_buff;
		*extra_buff = NULL;
	}
	return (stash);
}

/**
 * @brief Read and extract data from the file descriptor into the stash.
 *
 * This function reads data from the specified file descriptor (fd) into
 * the buffer (`buff`) with a maximum size of BUFFER_SIZE, appending
 * the read data to stash that may contain partial content from previous calls.
 *
 * @param fd	The file descriptor to read from.
 * @param stash	A pointer to char to store content from the file descriptor.
 * @param buff	A pointer to temporarily store data from the read function.
 * @return	A pointer to the updated stash. NULL if an error occurs or
 * 		the end of the file is reached. If nothing to read from the fd,
 * 		the original stash is returned.
 */
static char	*read_and_extract(int fd, char *stash, char *buff)
{
	ssize_t		bytes;
	char		*temp;

	bytes = read(fd, buff, BUFFER_SIZE);
	if (bytes <= 0)
		return (NULL);
	buff[bytes] = '\0';
	if (!stash)
	{
		stash = get_strdup(buff);
	}
	else
	{
		temp = stash;
		stash = get_strjoin(temp, buff);
		free(temp);
	}
	return (stash);
}

/**
 * @brief Extract a complete line from the stash, updating extra_buff.
 *
 * This function extracts characters from the stash prior to newline characters,
 * storing the remaining characters in the given extra_buff. It returns a
 * dynamically allocated string representing a complete line with '\n'
 *
 * @param stash		A pointer to char containing content from the loop.
 * @param extra_buff	A pointer to static variable to store any characters
 * 			after the newline character.
 * @return		A dynamically allocated string representing a complete
 * 			line of content with a newline character at the end. NULL
 * 			if the stash is empty.
 */
static char	*clean_stash(char *stash, char **extra_buff)
{
	char	*result;
	char	*newline_pos;

	result = NULL;
	newline_pos = get_strchr(stash, '\n');
	if (newline_pos)
	{
		*extra_buff = get_strdup(newline_pos + 1);
		result = get_substr(stash, 0, newline_pos + 1 - stash);
	}
	else if (stash)
	{
		result = get_strdup(stash);
	}
	return (result);
}

/**
 * @brief Free memory allocated for stash and buff.
 *
 * This function releases the memory allocated for the stash and buff parameters.
 *
 * @param stash A pointer to memory allocated for storing content.
 * @param buff  A pointer to memory allocated for temporary data storage.
 */
static void	free_up(char *stash, char *buff)
{
	free(stash);
	free(buff);
}
