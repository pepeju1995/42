/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 07:21:04 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 08:45:02 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		cursor;
	char	*result;

	len_s1 = ft_strlen(s1);
	len_s2 =  ft_strlen(s2);
	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	cursor = 0;
	while (cursor < (len_s1 + len_s2))
	{
		if (cursor < len_s1)
			result[cursor] = s1[cursor];
		else
			result[cursor] = s2[cursor - len_s1];
		cursor++;
	}
	result[cursor] = '\0';
	return (result);
}