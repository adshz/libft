/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:52:20 by szhong            #+#    #+#             */
/*   Updated: 2024/04/11 18:48:23 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>
# include <stdint.h>

char	*ft_itoa(int n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_atoi(const char *str);

#endif
