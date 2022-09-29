/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:30:19 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 21:56:11 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * *ft_read_file
 *
 * fd : the file descriptor we want
 *
 * Initialize the memory for the buffer
 * Read the file descriptor and put it in the str_file String
 * Returns the value of the file descriptor as a String named str_file
 */

char	*ft_read_file(int fd)
{
	char	*buff;
	char	*str_file;
	int		rd;

	buff = malloc(sizeof(char) * BUFF_SIZE);
	rd = 1;
	str_file = NULL;
	while (rd > 0)
	{
		rd = read(fd, buff, BUFF_SIZE);
		if (rd == -1)
		{
			free(buff);
			free(str_file);
			return (NULL);
		}
		str_file = ft_strnjoin_free(str_file, buff, rd);
		if (str_file == NULL)
			return (NULL);
	}
	free(buff);
	return (str_file);
}
