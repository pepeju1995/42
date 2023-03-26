/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:01:59 by josperez          #+#    #+#             */
/*   Updated: 2023/03/26 12:16:27 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(char *nptr)
{
	int	i;

	i = 0;
	while (ft_isdigit(nptr[i]))
		i++;
	return (i);
}

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static char	*clean_number(char *nptr)
{
	while (is_space(*nptr) == 1)
		nptr++;
	if (*nptr == '+' && ft_isdigit(*(nptr + 1)))
		nptr++;
	return(nptr);
}

static int	get_int(char numb, int pos)
{
	int	num;
	int	mult;

	num = numb - 48;
	mult = 1;
	while (mult < pos)
	{
		num *= 10;
		mult++;
	}
	return (num);
}

int		ft_atoi(const char *nptr)
{
	char	*clean_nptr;
	int		is_negative;
	int		num_len;
	int		result;
	int		cursor;

	clean_nptr = ft_strdup(nptr);
	is_negative = 1;
	result = 0;
	cursor = 0;
	clean_nptr = clean_number(clean_nptr);
	if (*clean_nptr == '-')
	{
		is_negative = -1;
		clean_nptr++;
	}
	num_len = number_len(clean_nptr);
	while (cursor < num_len)
	{
		result += get_int(clean_nptr[cursor], num_len - cursor);
		cursor++;
	}
	return (result * is_negative);
}
