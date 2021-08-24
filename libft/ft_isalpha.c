#include <stdio.h>
#include "ft_isupper.c"
#include "ft_islower.c"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

int main(void)
{
	printf("%d",ft_isalpha('K'));
	printf("%d",ft_isalpha('k'));
	printf("%d",ft_isalpha(0));
	return (0);
}
