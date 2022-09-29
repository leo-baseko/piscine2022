/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:26:21 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 19:46:47 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ***ft_create_tab
 *
 * *str_file : Dictionnary that we are using with the keys and their values
 *
 * Checks the number of valid lines
 * Allocates the memory for the table according to the number of lines in the dictionnary
 * Place each key and values in their respectives places
 * Returns the table with the values in it
 */

char	***ft_create_tab(char *str_file)
{
	char	***tab;
	int		t;
	int		len;
	int		i;

	len = ft_nb_valid_line(str_file);
	tab = (char ***)malloc(sizeof(char **) * (len + 1));
	if (!tab)
		return (NULL);
	t = 0;
	i = 0;
	while (t < len && str_file[i] != '\0')
	{
		if (ft_check_is_valid_line(str_file + i) == CHECK_OK)
		{
			tab[t] = ft_attribute_key_value(str_file + i);
			if (!tab[t])
				return (ft_free_tab_till_t(tab, t));
			t++;
		}
		while (str_file[i] != '\0' && str_file[i] != '\n')
			i++;
		if (str_file[i] == '\n')
			i++;
	}
	tab[t] = NULL;
	return (tab);
}

/*
 * ***ft_tab
 *
 * fd : an integer containing the values of the file descriptor
 *
 * Checks if the dictionnary is readable
 * Checks if the dictionnary table is non-null
 * If everything's okay, it returns the table
 */

char	***ft_tab(int fd)
{
	char	***tab;
	char	*str_file;

	str_file = ft_read_file(fd);
	if (str_file == NULL)
		return (NULL);
	tab = ft_create_tab(str_file);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
