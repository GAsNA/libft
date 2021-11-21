#include "libft.h"

int	is_char(char s_c, char c)
{
	if (s_c == c)
		return (1);
	return (0);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	words;
	
	i = 0;
	while (s[i] && is_char(s[i], c))
		i++;
	words = 0;
	while (s[i])
	{
		while (s[i] && !is_char(s[i], c))
			i++;
		words++;
		while (s[i] && is_char(s[i], c))
			i++;
	}
	return (words);
}

char	*ft_strdup_mod(char const *s, char c)
{
	char	*dup;
	int	i;

	i = 0;
	while (s[i] && !is_char(s[i], c))
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = -1;
	while (s[++i] && !is_char(s[i], c))
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}

char    **ft_split(char const *s, char c)
{
	int	words;
	char	**tab;
	int	i;
	int	j;

	words = count_words(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		while (s[i] && is_char(s[i], c))
			i++;
		tab[j] = ft_strdup_mod(&s[i], c);
		j++;
		while (s[i] && !is_char(s[i], c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
