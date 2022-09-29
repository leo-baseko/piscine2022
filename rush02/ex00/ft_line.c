/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:17:19 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 20:12:55 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
** ft_check_is_valid_line
**
** str_file : string with the content of the whole dictionary file
**
** Check if the line is correct aka :
** [a number][0 to n spaces]:[0 to n spaces][any printable characters]\n
**
**	Check if the start of the line is a number, then
**	Check if the number does not overflow the max unsigned int, then
**	Check if there is a ':' after the space after the number, then
**	Check if there is a '\n' after all the printable caracter, then
**	Return OK if all the checks pass 
*/

int	ft_check_is_valid_line(char *str_file)
{
	int		i;
	int		start_key;
	char	*tmp_key;

	i = 0;
	if (ft_isdigit(str_file[i]) == CHECK_ERR)
		return (CHECK_ERR);
	start_key = i;
	while (ft_isdigit(str_file[i]) == CHECK_OK)
		i++;
	tmp_key = ft_strndup(str_file + start_key, i);
	if (ft_check_number(tmp_key) == CHECK_ERR)
		return (CHECK_ERR);
	free(tmp_key);
	while (ft_isspace(str_file[i]) == CHECK_OK && str_file[i] != '\n')
		i++;
	if (str_file[i] != ':')
		return (CHECK_ERR);
	while (ft_isprintable(str_file[i]) == CHECK_OK
		&& str_file[i] != '\0' && str_file[i] != '\n')
		i++;
	if (str_file[i] != '\n')
		return (CHECK_ERR);
	return (CHECK_OK);
}

/*
 * ft_nb_valid_line
 *
 * *str_line : Dictionnary that we are using with the keys and their values
 *
 * Returns the correct number of lines in the dictionary
 */

int	ft_nb_valid_line(char *str_file)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str_file[i] != '\0')
	{
		if (ft_check_is_valid_line(str_file + i) == CHECK_OK)
			nb++;
		while (str_file[i] != '\0' && str_file[i] != '\n')
			i++;
		if (str_file[i] == '\n')
			i++;
	}
	return (nb);
}
