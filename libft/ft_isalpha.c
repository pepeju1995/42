/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:53:14 by josperez          #+#    #+#             */
/*   Updated: 2023/03/07 13:50:24 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int letter)
{
	if (letter < 65 || (letter > 90 && letter < 97) || letter > 122)
		return (0);
	return (1);
}
