/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:14:14 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 20:07:29 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ***ft_free_tab_till_t
 *
 * ***tab : String containing all of the values of the fd
 * t : the line in the dictionary where there was a problem with malloc
 *
 * Freeing the memory of everything at the t line
 */
char	***ft_free_tab_till_t(char ***tab, int t)
{
	t = t - 1;
	while (t >= 0)
	{
		free(tab[t][0]);
		free(tab[t][1]);
		free(tab[t]);
		t--;
	}
	return (NULL);
}

/*
 * ft_free_tab
 *
 * ***tab : String containing all of the values of the dictionary
 *
 * Freeing all of the memory allocated in the table
 * Returns an error
 */

int	ft_free_tab(char ***tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i][0]);
		free(tab[i][1]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (CHECK_ERR);
}

/*
 * ft_free_tab_number
 *
 * ***tab : String containing all of the values of the dictionary
 * *number : Numbers that we want to get rid off
 * *err_msg : The correct error message to display
 *
 * Display the correct error message
 * Freeing all the memory allocated for the table and the numbers in it
 * Returns an error
 */

int	ft_free_tab_number(char ***tab, char *number, char *err_msg)
{
	if (err_msg != NULL)
		ft_puterror(err_msg);
	ft_free_tab(tab);
	free(number);
	return (CHECK_ERR);
}
