/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:10:42 by szhong            #+#    #+#             */
/*   Updated: 2023/08/28 19:45:07 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

/*
int main()
{
    char character = 'a';

    if (ft_isalpha(character)) 
    {
        write(STDOUT_FILENO, "The character is an alphabetic character.\n", 43);
    } else {
        write(STDOUT_FILENO, "The character is not an alphabetic character.\n", 45);
    }

    return 0;
}
*/
