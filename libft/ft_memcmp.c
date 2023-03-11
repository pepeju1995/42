/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:46:32 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 10:54:10 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	if (*tmp_s1 || *tmp_s2)
	{
		while (*tmp_s1 || *tmp_s2)
		{
			if (*tmp_s1 < *tmp_s2)
				return (-1);
			else if (*tmp_s2 < *tmp_s1)
				return (1);
			tmp_s2++;
			tmp_s1++;
		}
	}
	return (0);
}
 