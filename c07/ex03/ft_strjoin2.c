#include <stdlib.h>

int	ft_tablen(int size, char **strs, char *sep)
{
	int	x;
	int	y;
	int	len;

	x = -1;
	len = 0;
	while (sep && sep[len])
		len++;
	len *= size - 1;
	x = -1;
	while (++x < size)
	{
		y = -1;
		while (strs[x][++y])
			len++;
	}
	if (len <= 0)
		return (0);
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		x;
	int		y;
	int		s;
	int		i;

	str = malloc(ft_tablen(size, strs, sep) * sizeof(char));
	if (!str)
		return (NULL);
	if (!size)
		return (str);
	x = -1;
	i = 0;
	while (++x < size)
	{
		y = -1;
		s = -1;
		while (strs[x][++y])
			str[i++] = strs[x][y];
		while (sep && sep[++s] && x < size - 1)
			str[i++] = sep[s];
	}
	str[i] = '\0';
	return (str);
}
