/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:09:54 by josperez          #+#    #+#             */
/*   Updated: 2023/04/01 15:54:14 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	next = *lst;
	if(next->next)
	{
		while (next->next)
		{
			del(next->content);
			next = next->next;
		}
		del(next->content);
	}
	*lst = NULL;
}
