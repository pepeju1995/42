/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:23:54 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 14:27:09 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*dst_cpy;
	char	*src_cpy;
	int		cursor;

	cursor = 0;
	src_cpy = (char *) src;
	dst_cpy = (char *) dest;
	while (cursor < n)
	{
		dst_cpy[cursor] = src_cpy[cursor];
		cursor++;
	}
	return (dest);
}