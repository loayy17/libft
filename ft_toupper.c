/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:31:58 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 14:37:32 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >='a' && c <= 'z')
	{
		return c -= 32;
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
    char test1 = 'a';
    char test2 = 'Z';
    char test3 = '9';
    char test4 = ' ';
    char test5 = 'm';

    // Applying toupper and printing results
    printf("toupper('%c') = '%c'\n", test1, ft_toupper(test1)); // Should convert 'a' to 'A'
    printf("toupper('%c') = '%c'\n", test2, ft_toupper(test2)); // Should leave 'Z' as 'Z'
    printf("toupper('%c') = '%c'\n", test3, ft_toupper(test3)); // Should leave '9' as '9'
    printf("toupper('%c') = '%c'\n", test4, ft_toupper(test4)); // Should leave ' ' as ' '
    printf("toupper('%c') = '%c'\n", test5, ft_toupper(test5)); // Should convert 'm' to 'M'

    return 0;
}
*/
