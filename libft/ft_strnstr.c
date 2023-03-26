/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:54:34 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 11:49:56 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;
	int	little_len;

	if (*little == '\0')
		return ((char *) big);
	i = 0;
	little_len = ft_strlen(little);
	while (i < len && (len - i >= little_len))
	{
		j = 0;
		while (j < little_len && little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return((char *)&big[i]);
		i++;
	}
	return (NULL);
}