int	ft_tolower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
