/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:33:50 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 10:40:04 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, int n)

{
	int	cursor;

	cursor = 0;
	if (*s1 || *s2)
	{
		while (s1[cursor] || s2[cursor])
		{
			if (s1[cursor] < s2[cursor])
				return (-1);
			else if (s2[cursor] < s1[cursor])
				return (1);
			cursor++;				
		}
	}
	return (0);
}
