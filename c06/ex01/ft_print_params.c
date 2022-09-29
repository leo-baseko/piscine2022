/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:49:47 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/26 15:22:10 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	j;

	(void) argc;
	j = 1;
	while (argv[j])
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
