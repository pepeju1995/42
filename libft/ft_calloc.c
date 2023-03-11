/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:27:33 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 11:42:10 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(int nmemb, int size)
{
	void	*result;
	int		cursor;

	result = malloc(nmemb * size);
	cursor = 0;
	while (cursor < nmemb)
	{
		((unsigned char *)result)[cursor] = 0;
		cursor++;
	}
	return (result);
}
