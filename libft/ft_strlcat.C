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
	size_t j;
	size_t k;

	k = 0;
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
		while (src[k] && (j + k + 1) < size)
		{
			dst[j + k] = src[k];
			k++;
			}
			if (j < size)
				dst[j + k] = '\0';
				return (j + ft_strlen(src));
}
