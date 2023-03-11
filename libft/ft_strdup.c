/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:35:44 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 11:42:18 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*s_dup;
	int		cursor;

	len = ft_strlen((char *)s) + 1;
	s_dup = malloc(len * sizeof(char));
	while (cursor < len)
	{
		s_dup[cursor] = s[cursor];
		cursor++;
	}
	s_dup[cursor] = '\0';
	return (s_dup);
}