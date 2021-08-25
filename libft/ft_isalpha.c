#include "ft_isupper.c"
#include "ft_islower.c"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
