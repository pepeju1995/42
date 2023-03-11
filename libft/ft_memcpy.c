/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:23:54 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 10:44:01 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int		cursor;

	cursor = 0;
	if (!(const char *)src && !(char *)dest)
		return (dest);
	while (cursor < n)
	{
		((char *)dest)[cursor] = ((const char *)src)[cursor];
		cursor++;
	}
	return (dest);
}
