/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:34:11 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 17:08:25 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcpy(char *dst, const char *src, int size)
{
	int	cursor;
	int	result;

	cursor = 0;
	result = 0;
	while (cursor < size - 1)
	{
		if (src[cursor])
		{
			dst[cursor] = src[cursor];
			result++;
		}
		else
			dst[cursor] = '\0';
		cursor++;
	}
	dst[cursor] = '\0';
	return (result);
}