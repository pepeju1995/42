/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:01:59 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 11:24:29 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	clean_number(char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		i++;
	}
	return (i);
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

	clean_nptr = (char *)nptr;
	is_negative = 1;
	result = 0;
	cursor = 0;
	if (*clean_nptr == '-')
	{
		is_negative = -1;
		clean_nptr++;
	}
	num_len = clean_number(clean_nptr);
	while (cursor < num_len)
	{
		result += get_int(clean_nptr[cursor], num_len - cursor);
		cursor++;
	}
	return (result * is_negative);
}
