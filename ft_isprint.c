/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:19:41 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 14:25:03 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c<=126);
}/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));

        c = 'Q';
    printf("\nResult when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

    return 0;
}*/
