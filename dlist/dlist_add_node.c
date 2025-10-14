/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:05 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 16:59:30 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist_node	*ft_new_dlist(void *content)
{
	t_dlist_node	*node;

	node = malloc(sizeof(t_dlist));
	if (!node)
		return ;
	node->content = content;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}