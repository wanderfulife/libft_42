int	ft_str_is_numeric(char *str)
{
	int	i;
	int	digits;

	i = 0;
	digits = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			digits = 0;
		}
		i++;
	}
	return (digits);
}
