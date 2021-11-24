/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:50:32 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/24 12:06:17 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = -1;
	while (str[++i] && i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
	}
	if (str[i] == c && i < n)
		return ((void *)&str[i]);
	return (0);
}
