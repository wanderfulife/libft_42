/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:41:45 by jwander           #+#    #+#             */
/*   Updated: 2021/09/17 12:47:57 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*string;
	int		index;
	int		j;

	index = 0;
	j = ft_strlen(src);
	string = malloc(sizeof(char) * j);
	if (string == NULL)
	{
		return (0);
	}
	while (src[index] != '\0')
	{
		string[index] = src[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}
