char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f])
		{
			f++;
			if (to_find[f] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
