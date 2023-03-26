/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 07:07:39 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 08:42:37 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	int		cursor;
	char	*result;

	cursor = 0;
	result = malloc((len + 1) * sizeof(char));
	while (cursor < len && s[cursor + start])
	{
		result[cursor] = s[cursor + start];
		cursor++;
	}
	result[cursor] = '\0';
	return (result);
}
