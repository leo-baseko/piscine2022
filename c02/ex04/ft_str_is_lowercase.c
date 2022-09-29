/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:53:11 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:32:59 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_lowercase(char a)
{
	if (a >= 'a' && a <= 'z')
		return (0);
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = test + ft_is_lowercase(str[i]);
		i++;
	}
	if (test == 0)
		return (1);
	else
		return (0);
}
