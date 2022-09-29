/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:02:24 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/10 11:12:05 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	rush01(int i, int j);

int	main(void)
{
	int i;
	int j;
	
	i = 1;
	//cet boucle equivaut a la hauteur
	while (i<=5)
	{
		j = 1;
		
		//equivaut a la longueur
		while (j<=6)
		{
			
			if ((i==1 && j==1) || (i==5 && j==6))
			{
				write(1, "/", 1);
			}
			if (i==1||i==5||j==1||j==6)
			{
				write(1, "*", 1);
			}
			else
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
