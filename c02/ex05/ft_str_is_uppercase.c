/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:57:25 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:35:45 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_uppercase(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = test + ft_is_uppercase(str[i]);
		i++;
	}
	if (test == 0)
		return (1);
	else
		return (0);
}
