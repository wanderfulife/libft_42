int	ft_str_is_printable(char *str)
{
	int	i;
	int	string;

	i = 0;
	string = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			string = 1;
		}
		else
		{
			string = 0;
			return (string);
		}
		i++;
	}
	return (string);
}
