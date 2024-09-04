/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:37:51 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 14:39:40 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_tolower(int c)
{
        if (c >='A' && c <= 'Z')
        {
                return c += 32;
        }
        else
        {
                return c;
        }
}/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    // Test cases for toupper
    char test1 = 'A';
    char test2 = 'z';
    char test3 = '9';
    char test4 = ' ';
    char test5 = 'M';

    // Applying toupper and printing results
    printf("tolower('%c') = '%c'\n", test1, ft_tolower(test1)); // Should convert 'a' to 'A'
    printf("tolower('%c') = '%c'\n", test2, ft_tolower(test2)); // Should leave 'Z' as 'Z'
    printf("tolower('%c') = '%c'\n", test3, ft_tolower(test3)); // Should leave '9' as '9'
    printf("tolower('%c') = '%c'\n", test4, ft_tolower(test4)); // Should leave ' ' as ' '
    printf("tolower('%c') = '%c'\n", test5, ft_tolower(test5)); // Should convert 'm' to 'M'

    return 0;
}
*/
