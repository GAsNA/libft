#include "libft.h"

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = 0;
	while (dest[len_d])
		len_d++;
	len_s = 0;
	while (src[len_s])
		len_s++;
	if (len_d >= size)
		return (size + len_s);
	i = -1;
	while (src[++i] && (len_d + i) < size - 1)
		dest[len_d + i] = src[i];
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
