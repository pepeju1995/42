/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:37:03 by josperez          #+#    #+#             */
/*   Updated: 2023/03/21 17:37:03 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		init;
	int		end;
	char	*result;

	init = 0;
	end = ft_strlen(s1);
	while (in_set(s1[init], set) == 1)
		init++;
	while (in_set(s1[end - 1], set) == 1)
		end--;
	result = ft_substr(s1, init, end - init);
	return (result);
}