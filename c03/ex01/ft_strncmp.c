/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:33:45 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/23 13:43:15 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%d\n", ft_strncmp("", "", 0));
    printf("%d\n", strncmp("", "", 0));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "aa", 0));
    printf("%d\n", strncmp("aa", "aa", 0));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "", 0));
    printf("%d\n", strncmp("aa", "", 0));
    printf("\n");
    printf("%d\n", ft_strncmp("", "zz", 0));
    printf("%d\n", strncmp("", "zz", 0));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "zz", 0));
    printf("%d\n", strncmp("aa", "zz", 0));
    printf("\n");
    printf("%d\n", ft_strncmp("", "", 2));
    printf("%d\n", strncmp("", "", 2));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "aa", 2));
    printf("%d\n", strncmp("aa", "aa", 2));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "", 2));
    printf("%d\n", strncmp("aa", "", 2));
    printf("\n");
    printf("%d\n", ft_strncmp("", "zz", 2));
    printf("%d\n", strncmp("", "zz", 2));
    printf("\n");
    printf("%d\n", ft_strncmp("aa", "zz", 2));
    printf("%d\n", strncmp("aa", "zz", 2));
}
*/
