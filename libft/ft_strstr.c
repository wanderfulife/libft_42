/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:41:45 by jwander           #+#    #+#             */
/*   Updated: 2021/09/10 14:41:45 by jwander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f])
		{
			f++;
			if (to_find[f] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
