/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:58:45 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:27:47 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//creation of a test alpha function
int	ft_is_alpha(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (0);
	else if (a >= 'a' && a <= 'z')
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = test + ft_is_alpha(str[i]);
		i++;
	}
	if (test == 0)
		return (1);
	else
		return (0);
}
