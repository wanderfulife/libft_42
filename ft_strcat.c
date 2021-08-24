char	*ft_strcat(char *dest, char *src)
{
	int	dst;
	int	sr;

	dst = 0;
	sr = 0;
	while (dest[dst] != '\0')
	{
		dst++;
	}
	while (src[sr] != '\0')
	{
		dest[dst] = src[sr];
		dst++;
		sr++;
	}
	dest[dst] = '\0';
	return (dest);
}
