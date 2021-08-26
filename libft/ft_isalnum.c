#include <stdio.h>
#include "ft_isdigit.c"
#include "ft_isalpha.c"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
