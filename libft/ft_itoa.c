/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:14:18 by josperez          #+#    #+#             */
/*   Updated: 2023/03/21 18:14:18 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	integer_len(int n)
{
	int	result;

	result = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

static void	reverse_integer(char *str, int len)
{
	int		start;
	int 	end;
	char	tmp;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	char		*result;
	int			int_len;
	int			pos;

	int_len = 0;
	pos = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		int_len++;
		n *= -1;
	}
	int_len += integer_len(n);
	result = malloc((int_len + 1) * sizeof(char));
	while (n / 10 > 0)
	{
		result[pos++] = (n % 10) + '0';
		n /= 10;
	}
	result[pos++] = (n % 10) + '0';
	if (pos < int_len)
		result[pos++] = '-';
	reverse_integer(result, int_len);
	return (result);
}
