/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:16:41 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:22:40 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_add_back(t_dlist *curr_node, t_dlist_node *new_node)
{
	if (!curr_node || !new_node)
		return;
	if (!curr_node->last)
	{
		curr_node->first = new_node;
		curr_node->last = new_node;
		new_node->previous = NULL;
		new_node->next = NULL;
	}
	else
	{
		new_node->previous = curr_node->last;
		curr_node->last->next = new_node;
		new_node->next = NULL;
		curr_node->last = new_node;
	}
	curr_node->size++;
}