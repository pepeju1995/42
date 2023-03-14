/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:40:52 by josperez          #+#    #+#             */
/*   Updated: 2023/03/14 21:54:55 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	char	*s_cpy;
	int		cursor;

	s_cpy = ft_strdup(s);
	cursor = 0;
	if (c == '\0')
	{
		while (*(unsigned char *)s_cpy)
		{
			s_cpy++;
		}
		return (s_cpy);
	}

	while (((unsigned char *)s_cpy)[cursor] && cursor < n)
	{
		if (*(unsigned char *)s_cpy == (unsigned char)c)
			return (s_cpy);
		cursor++;
	}
	return (s_cpy++);
}
