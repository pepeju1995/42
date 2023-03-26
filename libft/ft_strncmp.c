/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:33:50 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 11:23:06 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, int n)

{
	int	cursor;

	cursor = 0;
	if (*s1 || *s2)
	{
		while (cursor < n)
		{
			if ((unsigned char)s1[cursor] < (unsigned char)s2[cursor])
				return (-1);
			else if ((unsigned char)s2[cursor] < (unsigned char)s1[cursor])
				return (1);
			cursor++;				
		}
	}
	return (0);
}
