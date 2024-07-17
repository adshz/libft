/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:40 by szhong            #+#    #+#             */
/*   Updated: 2024/07/17 11:39:40 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER
#  define BUFFER 10
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define STRJOIN_FAILED 1

char	*get_next_line(int fd);
char	*get_strchr(char const *s, int c);
size_t	get_strlen(const char *s);
char	*get_strdup(const char *s);
char	*get_strjoin(char const *s1, char const *s2);
char	*get_substr(char const *s, unsigned int start, size_t len);
#endif
