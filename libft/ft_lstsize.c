/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 07:49:31 by josperez          #+#    #+#             */
/*   Updated: 2023/03/30 08:01:18 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*next;
	int		len;

	len = 0;
	next = NULL;
	if (lst)
	{
		next = lst->next;
		len++;
	}
	while (next != NULL)
	{
		next = next->next;
		len++;
	}
	return (len);	
}
