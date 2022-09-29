/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:30:49 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/24 12:23:49 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	val;

	if (power < 0)
		return (0);
	i = 1;
	val = nb;
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= val;
		i++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("tema la puissance de %d", ft_iterative_power(-6, 3));
	return (0);
}*/
