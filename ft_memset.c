#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = s;
	i = -1;
	while (++i < n)
		str[i] = (unsigned char)c;
	return (s);
}
