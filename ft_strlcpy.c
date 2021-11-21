#include "libft.h"

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	i = -1;
	while (src[++i] && i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (len_src);
}
