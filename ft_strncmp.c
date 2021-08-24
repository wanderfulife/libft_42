int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (n > 0 && s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
			break ;
		c++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}
