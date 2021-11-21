#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	int	len_s1;
	int	len_s2;
	char	*str;

	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	len_s2 = 0;
	while (s2[len_s2])
		len_s2++;
	str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcat(str, (char *)s1, len_s1 + 1);
	ft_strlcat(str, (char *)s2, len_s1 + len_s2 + 1);
	return (str);
}
