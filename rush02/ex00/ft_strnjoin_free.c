/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:38:53 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:35:09 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * *ft_strnjoin_free
 *
 * *str1 : String of the str_file
 * *str2 : String of the buffer
 * len : the length of the buffer
 *
 * Checks if the str_file ain't empty
 * 		If it is, it returns the buffer String
 * Allocates the memory for the result that will contain the str_line + buffer
 * Put the values of str_line and the buffer in the result String
 * End the result String with NULL
 * Frees the memory of the str_line
 * Returns the final result String
 */

char	*ft_strnjoin_free(char *str1, char *str2, int len)
{
	char	*result;
	int		r;
	int		i;

	if (!str1)
		return (ft_strndup(str2, len));
	r = 0;
	i = 0;
	result = (char *)malloc((ft_strlen(str1) + ft_strlen(str2) + 1)
			* sizeof(char));
	if (result == NULL)
	{
		free(str1);
		return (NULL);
	}
	while (str1[i])
		result[r++] = str1[i++];
	i = 0;
	while (str2[i] && i < len)
		result[r++] = str2[i++];
	result[r] = '\0';
	free(str1);
	return (result);
}
