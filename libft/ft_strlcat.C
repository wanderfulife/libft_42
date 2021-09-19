/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:39:13 by jwander           #+#    #+#             */
/*   Updated: 2021/09/18 18:53:11 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	destindex;

	destindex = 0;
	while (dst[destindex] && destindex < size)
		destindex++;
	index = destindex;
	while (src[destindex - index] && destindex + 1 < size)
	{
		dst[destindex] = src[destindex - index];
		destindex++;
	}
	if (index < size)
		dst[destindex] = '\0';
	return (index + ft_strlen(src));
}
