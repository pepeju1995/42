/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:27:56 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 14:32:14 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*dest_cpy;
	char	*src_cpy;
	int		cursor;
	
	cursor = 0;
	dest_cpy = (char *) dest;
	src_cpy = (char *) src;
	while (cursor < n)
	{
		dest_cpy[cursor] = src_cpy[cursor];
		cursor++;
	}
	return(dest);
}