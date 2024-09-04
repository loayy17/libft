/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:14:25 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 14:01:44 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char	c)
{
	return (c >= 'a'&& c<='z')||(c >='A' && c<='Z')||(c >= '0' && c<= '9');
}/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;
	
    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);


    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
int i = 5;
    c = '+';
    result = ft_isalnum(i);
    printf("When %d is passed, return value is %d\n", i, result);
    return 0;
}*/
