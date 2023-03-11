/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:54:34 by josperez          #+#    #+#             */
/*   Updated: 2023/03/11 11:01:24 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;

	if (*little == '\0')
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i] && little[j] == big[i])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return((char *)&big[i - j]);
		j -= i + 1;
	}
	return (0);
}