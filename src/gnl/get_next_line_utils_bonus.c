/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:29 by szhong            #+#    #+#             */
/*   Updated: 2024/01/09 18:46:59 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

/**
 * @brief Locate the first occurrence of a character in a string.
 *
 * This function searches for the first occurrence of the character (@p c)
 * in the given null-terminated string (@p s).
 *
 * @param s	A pointer to the null-terminated string to search.
 * @param c	The character to search for.
 *
 * @return	A pointer to the first occurrence of the character in a string 
 * 		or NULL if the character is not found or if the input string 
 * 		is NULL.
 */
char	*get_strchr(char const *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && *s != (char )c)
		s++;
	if (*s == (char )c)
		return ((char *)s);
	return (0);
}

/**
 * @brief Calculate the length of a string.
 *
 * This function calculates the length of the null-terminated string (@p s) by
 * iterating through the characters until the null terminator ('\0') is 
 * ecountered.
 *
 * @param s	A pointer to the null-terminated string.
 * @return	The length of the string, or 0 if the input string is NULL.
 *
 * @note	The difference between Libft and Get Next Line is the condition
 * 		check if @p s is a NULL pointer or not. 
 */
size_t	get_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * @brief Duplicate a string.
 *
 * This function creates a duplicate of a null-terminated string (s) and returns
 * a pointer to the newly allocated memory block containing the duplicatd string.
 *
 * @param s	A pointer to the null-terminatd string to duplicate.
 * @return	A pointer to the duplicated string, or NULL if memory allocation
 * 		fails or if the input string is NULL or empty.
 * @note
 * The function allocates memory for the concatenated string;
 * The caller must free this memory to prevent memory leaks.
 *
 * The resulting string is null-terminated.
 *
 * The difference between Libft and Get Next Line is checking if either @p s1 
 * and @p s2 are NULL pointers.
 */
char	*get_strdup(const char *s)
{
	char	*dup;
	char	*ptr;

	if (!s || !*s)
		return (0);
	dup = (char *)malloc((get_strlen(s) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ptr = dup;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}

/**
 * @brief Concatenate two strings.
 *
 * This function concatenates two null-terminated strings (@p s1 and @p s2),
 * and returns a pointer to newly allocated memory for concatenated string.
 * 
 * @param s1	The first null-terminated string.
 * @param s2	The second null-terminated string.
 *
 * @return	A pointer to concatenated string, or NULL if memory allocation faills
 * 		or if either of the input strings is NULL.
 * 
 * @note
 * The function allocates memory for the concatenated string;
 * The caller must free this memory to prevent memory leaks.
 * 
 * The resulting string is null-terminated.
 *
 * The difference between Libft and Get Next Line is checking if either @p s1
 * and @p s2 are NULL pointers;
 */
char	*get_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*str;
	char	*ptr_str;

	if (!s1 || !s2)
		return (0);
	total_size = get_strlen((char *)s1) + get_strlen((char *)s2) + 1;
	str = (char *)malloc(total_size * sizeof(char));
	if (!str)
		return (NULL);
	ptr_str = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (ptr_str);
}

/**
 * @brief Extract a substring from a given string.
 *
 * This function extracts a substring from the null-terminated string (@p s),
 * starting at the specified index (@p start) and having a length of 
 * at most (@p len) characters.
 * The resulting substring is null-terminated and dynamically allocated.
 *
 * @param s	The null-terminated string to extract the substring from.
 * @param start	The index at which to start extracting the substring.
 * @param len	The maximum length of the extracted substring.
 *
 * @return	A pointer to the dynamically allocated substring,
 * 		or NULL if memory allocation fails
 * 		or if the input string is NULL or the specified indices are invalid.
 *
 * @note The caller must free the memory allocated for the substring 
 * to prevent memory leaks
 */
char	*get_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s || start >= get_strlen(s))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > get_strlen(s) - start)
		len = get_strlen(s) - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (i < get_strlen(s) && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
