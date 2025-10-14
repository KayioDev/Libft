/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:52:59 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:15:24 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_add_front(t_dlist	*curr_node, t_dlist_node *new)
{
	if (!curr_node || !new)
		return ;
	if (!curr_node->first)
	{
		curr_node->first = new;
		curr_node->last = new;
		new->next = NULL;
		new->previous = NULL;
	}
	else
	{
		new->next = curr_node->first;
		new->previous = NULL;
		curr_node->first->previous = new;
		curr_node->first = new;
	}
		curr_node->size++;
}