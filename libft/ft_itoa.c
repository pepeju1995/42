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

static int	integer_len(int n)
{
	int	int_len;

	int_len = 0;
	while (n > 0)
	{
		n %= 10;
		int_len++;
	}
	return (int_len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		int_len;

	int_len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
		}
	}	
}