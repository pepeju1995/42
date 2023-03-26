/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 07:07:39 by josperez          #+#    #+#             */
/*   Updated: 2023/03/16 07:16:03 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	int		cursor;
	char	*result;

	cursor = 0;
	result = malloc(len * sizeof(char));
	while (cursor < len && s[cursor + start])
	{
		result[cursor] = s[cursor + start];
		cursor++;
	}
	return (result);
}
