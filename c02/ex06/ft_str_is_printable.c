/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:01:38 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:37:24 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_printable(char a)
{
	if (32 <= a && 127 >= a)
		return (0);
	else
		return (1);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = test + ft_is_printable(str[i]);
		i++;
	}
	if (test == 0)
		return (1);
	else
		return (0);
}
