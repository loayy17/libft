/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:09:34 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 13:14:04 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='5';
    printf("Result when numeric character is passed: %d", isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", isdigit(c));
    c='5';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));
    return 0;
}*/
