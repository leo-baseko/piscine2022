/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:47:57 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:30:09 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//creation of a test numeric function
int	ft_is_num(char a)
{
	if (a >= '0' && a <= '9')
		return (0);
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = test + ft_is_num(str[i]);
		i++;
	}
	if (test == 0)
		return (1);
	else
		return (0);
}
