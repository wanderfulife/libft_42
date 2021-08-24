#include <stdlib.h>

int	strlength(char *str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
		w++;
	return (w);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		index;
	int		j;

	index = 0;
	j = strlength(src);
	string = malloc(sizeof(char) * j);
	if (string == NULL)
	{
		return (0);
	}
	while (src[index] != '\0')
	{
		string[index] = src[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}
