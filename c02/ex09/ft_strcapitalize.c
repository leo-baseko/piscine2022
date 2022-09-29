/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:31:07 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/14 20:17:04 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_alphanumeric(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

void	ft_uppercase(char *b)
{	
	if (*b >= 'a' && *b <= 'z')
		*b = *b - 32;
}

void	ft_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		ft_lowercase(&str[k]);
		if (k == 0 || ft_is_alphanumeric(str[k - 1]) != 1)
			ft_uppercase(&str[k]);
		k++;
	}
	return (str);
}
