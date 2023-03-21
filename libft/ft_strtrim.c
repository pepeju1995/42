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

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		init;
	int		end;
	char	*result;

	init = 0;
	while (s1[init] && in_set(s1[init], set) == 1)
		init++;
	end = ft_strlen(s1);
	while (end > init && in_set(s1[end], set) == 1)
		end--;
	result = malloc((end - init) * sizeof(char));
	result = s1 + init;
	return (result);
}