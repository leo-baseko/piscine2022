/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:05:30 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:25:42 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * *ft_attribute_key
 *
 * *str : a String that contains the key that we need
 *
 * Checks if *str contains digits at every positions
 * Copy the value of *str in *key
 * Returns the key number
 */
char	*ft_attribute_key(char *str)
{
	int		i;
	char	*key;

	i = 0;
	while (ft_isdigit(str[i]) == CHECK_OK)
		i++;
	key = ft_strndup(str, i);
	return (key);
}

/*
 * ft_len_value_trim
 *
 * *str : String that contains the numbers we crave
 *
 * Returns the length of *str without spaces and new lines
 */

int	ft_len_value_trim(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		while (ft_isspace(str[i]) == CHECK_OK && str[i] != '\n')
			i++;
		if (str[i] != '\n')
			len++;
		while (str[i] != '\n' && ft_isspace(str[i]) == CHECK_ERR
			&& str[i] != '\0')
		{
			len++;
			i++;
		}
	}
	return (len);
}

/*
 * *ft_attribute_value
 *
 * *str : a String that contains the key that we want
 * Allocate the size of the value (String after the ':')
 * 		in a variable called value
 * Returns the  value
 */

char	*ft_attribute_value(char *str)
{
	int		i;
	int		len;
	char	*value;

	i = 0;
	len = 0;
	value = (char *)malloc(sizeof(char) * (ft_len_value_trim(str + i) + 1));
	if (value == NULL)
		return (NULL);
	while (str[i] != '\n')
	{
		while (ft_isspace(str[i]) == CHECK_OK && str[i] != '\n')
			i++;
		while (str[i] != '\n' && ft_isspace(str[i]) == CHECK_ERR)
		{
			value[len] = str[i];
			len++;
			i++;
		}
		while (ft_isspace(str[i]) == CHECK_OK && str[i] != '\n')
			i++;
		if (str[i] != '\n' && ft_isspace(str[i]) == CHECK_ERR)
			value[len++] = ' ';
	}
	value[len] = '\0';
	return (value);
}

/*
 * **ft_attribute_key_value
 *
 * *str : String of 
 *
 * Returns ??
 */

char	**ft_attribute_key_value(char *str)
{
	int		i;
	char	**key_value;

	key_value = (char **)malloc(sizeof(char *) * 2);
	if (key_value == NULL)
		return (NULL);
	key_value[KEY] = ft_attribute_key(str);
	if (key_value[KEY] == NULL)
	{
		free(key_value);
		return (NULL);
	}
	i = 0;
	while (str[i] != ':' && str[i] != '\0')
		i++;
	if (str[i] == ':')
		i++;
	key_value[VALUE] = ft_attribute_value(str + i);
	if (key_value[VALUE] == NULL)
	{
		free(key_value[KEY]);
		free(key_value);
		return (NULL);
	}
	return (key_value);
}
