#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*string;
	int		index;
	int		j;

	index = 0;
	j = ft_strlen(src);
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
