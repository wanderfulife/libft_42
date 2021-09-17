/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:08:17 by jwander           #+#    #+#             */
/*   Updated: 2021/09/17 12:41:06 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && *haystack)
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && *needle)
			j++;
		if (needle[j] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
