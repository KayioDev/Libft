/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:39:26 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:43:47 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist_node	*dlist_search(t_dlist *list, void *content)
{
	t_dlist_node	*node;

	if (!list)
		return (NULL);
	node = list->first;
	while (node	)
	{
		if (node->content == content)
			return (node);
		node = node->next;
	}
	return (NULL);
}