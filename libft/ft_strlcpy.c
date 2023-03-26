/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:34:11 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 12:39:44 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, int size)
{
	int	cursor;
	int	result;

	cursor = 0;
	result = ft_strlen(src);
	if (size == 0)
		return (result);
	while (cursor < size - 1 && src[cursor])
	{
		dst[cursor] = src[cursor];
		cursor++;
	}
	dst[cursor] = '\0';
	return (result);
}