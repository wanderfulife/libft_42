/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:58:37 by jwander           #+#    #+#             */
/*   Updated: 2021/09/18 19:18:01 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	start;
	size_t	len;

	index = 0;
	while (checker(s1[index], set) == 1)
		index++;
	start = index;
	while (s1[index])
		index++;
	index--;
	while (checker(s1[index], set) == 1)
		index--;
	len = index - start + 1;
	return (ft_substr(s1, start, len));
}
