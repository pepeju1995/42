/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josperez <josperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 07:15:59 by josperez          #+#    #+#             */
/*   Updated: 2023/03/30 07:39:17 by josperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!content)
		result->content = NULL;
	else
		result->content = content;
	result->next = NULL;
	return (result);
}