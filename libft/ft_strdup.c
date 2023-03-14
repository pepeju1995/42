/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:35:44 by josperez          #+#    #+#             */
/*   Updated: 2023/03/14 21:54:46 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	char	*s_dup;
	int		cursor;

	len = ft_strlen((char *)s) + 1;
	s_dup = malloc(len * sizeof(char));
	cursor = 0;
	while (cursor < len)
	{
		s_dup[cursor] = s[cursor];
		cursor++;
	}
	return (s_dup);
}