/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:57:50 by josperez          #+#    #+#             */
/*   Updated: 2023/03/21 18:57:50 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	cursor;

	cursor = 0;
	while (s[cursor])
	{
		f(cursor, s + cursor);
		cursor++;
	}
}