/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:25:32 by lalhindi          #+#    #+#             */
/*   Updated: 2024/08/26 14:29:55 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}/*
#include <stdio.h>
int main()
{
    // Test cases
    char str1[] = "Hello, World!";
    char str2[] = "42";
    char str3[] = "";

    // Call ft_strlen and print the results
    printf("Length of \"%s\" is %d\n", str1, ft_strlen(str1));
    printf("Length of \"%s\" is %d\n", str2, ft_strlen(str2));
    printf("Length of an empty string is %d\n", ft_strlen(str3));

    return 0;
}*/
