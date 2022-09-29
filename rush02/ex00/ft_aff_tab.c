/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:18:32 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/24 18:29:34 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_aff_tab(char ***tab)
{
	int	i;

	i = 0;
	printf("|KEY| : |VALUE|\n");
	while (tab[i])
	{
		printf("|%s| : |%s|\n",
			tab[i][KEY], tab[i][VALUE]);
			i++;
	}
}
