/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:21:28 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 14:23:14 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	int		cursor;
	char	*str;

	cursor = 0;
	str = (char *) s;
	while (cursor < n)
	{
		str[cursor] = '\0';
		cursor++;
	}
}