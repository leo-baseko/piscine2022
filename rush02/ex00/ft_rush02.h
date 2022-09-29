/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:18:37 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/25 21:37:23 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// to delete at the end
#include <stdio.h>
#include <string.h>

#define COUCOU "%s : ligne %i in %s()\n", __FILE__, __LINE__, __func__
// #define COUCOU ""

void	ft_aff_tab(char ***tab);
char	***ft_hard_tab(void);

// endif

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define CHECK_ERR -1
# define CHECK_OK 0

# define KEY 0
# define VALUE 1

# define DICT_ERR "Dict Error\n"
// the following will be only "Error\n" at the enf
# define ARG_ERR "Error ARG\n"
# define NBR_ERR "Error Number\n"
# define MAL_ERR "Error Malloc\n"
# define ALGO_ERR "Error Algo\n"

# define BUFF_SIZE 1

typedef	unsigned int	t_uint;

// utils
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_puterror(char *str);
int		ft_isdigit(int c);
int		ft_isspace(int c);
int		ft_isprintable(int c);
int		ft_str_is_equal(char *str1, char *str2, int n);

t_uint	ft_ato_uint(char *str);

char	*ft_strdup(char *str);
char	*ft_strndup(char *str, int size);

char	*ft_strnjoin_free(char *str1, char *str2, int len);

// ft_free
char	***ft_free_tab_till_t(char ***tab, int t);
int		ft_free_tab_number(char ***tab, char *number, char *err_msg);

// ft_read
char	*ft_read_file(int fd);

// ft_line
int		ft_check_is_valid_line(char *str_file);
int		ft_nb_valid_line(char *str_file);

// ft_value
char	**ft_attribute_key_value(char *str);

// ft_tab
char	***ft_tab(int fd);

// ft_algo
int		ft_algo(char ***tab, char *number);
int		ft_algo2(char ***tab, char *number);

// ft_check_number
int		ft_check_number(char *nbr);

#endif
