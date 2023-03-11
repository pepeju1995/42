/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:27:56 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 09:42:44 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	int		cursor;
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (tmp_dest == tmp_src || n == 0)
		return (dest);
	if (tmp_src < tmp_dest && tmp_dest < tmp_src + n)
	{
		cursor = n - 1;
		while (cursor >= 0)
		{
			tmp_dest[cursor] = tmp_src[cursor];
			cursor--;
		}
		
	}
	else if (tmp_dest < tmp_src && tmp_src < tmp_dest + n)
	{
		cursor = 0;
		while (cursor < n)
		{
			tmp_dest[cursor] = tmp_src[cursor];
			cursor++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return(dest);
}