/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:31:25 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:37:03 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_dlst_clear(t_dlist *lst, void (*del)(void *))
{
	t_dlist_node	*curr;
	t_dlist_node	*next;

	curr = lst->first;
	while (curr)
	{
		next = curr->next;
		if (del)
			del(curr->content);
		free(curr);
		curr = next;
	}
	lst->first = NULL;
	lst->last = NULL;
	lst->size = 0;
}