#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v'
		|| nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	sign = 1;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return (res * sign);
}
