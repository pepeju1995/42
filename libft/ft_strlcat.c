/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:09:50 by josperez          #+#    #+#             */
/*   Updated: 2023/03/14 21:13:20 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, int size)
{
	int		src_len;
	int		dst_len;
	int		cursor;
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cursor = 1;
	while (cursor < size - dst_len - 1 && cursor <= src_len)
	{
		dst[dst_len + cursor] = src[cursor - 1];
		cursor++;
	}
	dst[cursor] = '\0';
	return (dst_len + src_len);
}