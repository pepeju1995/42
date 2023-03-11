/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:49:06 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 10:34:09 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_last;
	char	*s_cpy;
	
	s_cpy = (char *)s;
	if (*s_cpy)
	{
		while (*s_cpy)
		{
			s_cpy = ft_strchr(s_cpy, c);
			if (*s_cpy)
				s_last = s_cpy;
			s_cpy++;
		}
		return (s_last);
	}
	
	return (s_cpy);
}
