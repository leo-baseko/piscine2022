/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:30:35 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/24 12:12:12 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	max;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 2;
	max = nb;
	while (i < max)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
}*/
