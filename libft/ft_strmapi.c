/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:30:59 by josperez          #+#    #+#             */
/*   Updated: 2023/03/21 18:30:59 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					str_len;
	unsigned int		cursor;
	char				*result;

	str_len = ft_strlen(s);
	result = malloc(str_len * sizeof(char));
	cursor = 0;
	while (s[cursor])
	{
		result[cursor] = f(cursor, s[cursor]);
		cursor++;
	}
	return (result);
}