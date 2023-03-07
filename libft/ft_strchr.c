/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:38:49 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 18:56:53 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*s_cpy;

	s_cpy = s;
	if (c == '\0')
	{
		while (*s_cpy)
		{
			s_cpy++;
		}
		return (s_cpy);
	}

	while (*s_cpy)
	{
		if (*s_cpy == c)
			return (s_cpy);
		*s_cpy++;
	}
	return (s_cpy++);
}