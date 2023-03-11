/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:40:52 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 10:46:06 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	void	*s_cpy;

	s_cpy = s;
	if (c == '\0')
	{
		while (*(unsigned char *)s_cpy)
		{
			s_cpy++;
		}
		return (s_cpy);
	}

	while (*(unsigned char *)s_cpy)
	{
		if (*(unsigned char *)s_cpy == (unsigned char)c)
			return (s_cpy);
		s_cpy++;
	}
	return (s_cpy++);
}
