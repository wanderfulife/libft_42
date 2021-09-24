/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:04:49 by jwander           #+#    #+#             */
/*   Updated: 2021/09/17 14:02:47 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	target;
	unsigned char	*source;
	
	i = 0;
	target = (unsigned char)c;
	source = (unsigned char *)s;
	while (i < n)
	{
		if (source[i] == target)
			return ((void *) source + i);
		i++;
	}
	return (NULL);
}
