/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:49:06 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 10:11:39 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_cpy;
	int		cursor;
	
	s_cpy = (char *)s;
	cursor = ft_strlen(s_cpy);
	if (c == '\0')
		return (s_cpy + cursor);
	while (cursor >= 0)
	{
		if (s_cpy[cursor] == c)
			return (s_cpy + cursor);
		cursor--;
	}
	return (NULL);
}
