/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:58:11 by josperez          #+#    #+#             */
/*   Updated: 2023/04/01 17:44:58 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	void	*word;
	int		len_word;

	len_word = ft_strlen((const char *)lst->content) + 1;
	if ((word = (char *)malloc(len_word * sizeof(char))) == NULL)
		return (NULL);
	ft_strlcpy((char *)word, (char *)f(lst->content), len_word);
	new_lst = ft_lstnew(word);
	current = new_lst;
	current->next = lst->next;
	current = current->next;
	del(lst->content);
	while (current->next)
	{
		current->content = f(current->content);
		current->next = current->next;
		if (current->next)
			current = current->next;
	}
	return (new_lst);
}
