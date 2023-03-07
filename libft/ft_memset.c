/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:52:46 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 14:19:43 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int	count;
	int	*to_modify;

	count = 0;
	to_modify = (int *) b;
	while (count < len)
	{
		to_modify[count] = c;
		count++;
	}

	return (b);
}