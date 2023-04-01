/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:13:58 by josperez          #+#    #+#             */
/*   Updated: 2023/03/30 08:25:21 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next;

	next = NULL;
	if (lst)
		next = lst->next;
	if (next)
	{
		while (next->next != NULL)
			next = next->next;
	}
	else
		return (lst);
	return (next);
}
