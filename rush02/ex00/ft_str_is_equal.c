/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_equal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:45:08 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:32:17 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_str_is_equal
 *
 * *str1 and *str2 : the 2 strings that we want to compare
 * n : index of the strings
 *
 * Returns an OK if the 2 string are equals until the n character
 * Else, it returns ERR
 */

int	ft_str_is_equal(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && i < n)
		i++;
	if (str1[i] == '\0' && i == n)
		return (CHECK_OK);
	return (CHECK_ERR);
}
