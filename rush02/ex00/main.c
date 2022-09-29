/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:44:14 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:36:39 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_fd
 * 
 * argc : numbers of arguments passed
 * **argv : pointer array which points to each arguments passed to the program
 *
 * Check if the number of arguments is equal 2 :
 * 	if it is : it checks if the default dictionnary is readable
 * 	if not : it checks if the dictionnary in parameter is readable
 */

int	ft_fd(int argc, char **argv)
{
	if (argc == 2)
		return (open("numbers.dict", O_RDONLY));
	return (open(argv[1], O_RDONLY));
}

/*
 * *ft_trim_number
 *
 * argc : numbers of argument passed
 * argv : pointer array which points to each arguments passed to the program
 *
 * Checks if the argument contains white spaces and
 * 		proceed to go to the next character if so
 * Returns a copy of the number in parameter
*/

char	*ft_trim_number(int argc, char **argv)
{
	char	*param;
	char	*number;
	int		i;

	if (argc == 2)
		param = argv[1];
	else
		param = argv[2];
	i = 0;
	while (ft_isspace(*param) == CHECK_OK)
		param++;
	number = ft_strdup(param);
	return (number);
}

/*
 * main
 *
 * argc : numbers of argument passed
 * **argv : pointer array which points to each arguments passed to the program
 *
 * Checks a lot of things...
 * 
 * Checks if the numbers of parameters equals 2 or 3
 * Checks if the dictionnary is readable
 * Checks if the value of tab ain't NULL
 * Display the tab
 * Assign the number value without white spaces in the number variable
 * Checks if the numbers are indeed numbers
 * Checks if ft_algo worked properly
 */

int	main(int argc, char **argv)
{
	char	***tab;
	int		fd;
	char	*number;

	if (argc == 1 || argc > 3)
		return (ft_puterror(ARG_ERR));
	fd = ft_fd(argc, argv);
	if (fd == -1)
		return (ft_puterror(DICT_ERR));
	tab = ft_tab(fd);
	close(fd);
	if (tab == NULL)
		return (CHECK_ERR);
	number = ft_trim_number(argc, argv);
	if (ft_check_number(number) == CHECK_ERR)
		return (ft_free_tab_number(tab, number, NBR_ERR));
	if (ft_algo(tab, number) == CHECK_ERR)
		return (ft_free_tab_number(tab, number, ALGO_ERR));
	write(1, "\n", 1);
	ft_free_tab_number(tab, number, NULL);
	return (CHECK_OK);
}
