/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:37:45 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 17:39:15 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlst_new(void)
{
	t_dlist	*head;

	head = malloc(sizeof(t_dlist));
	if (!head)
		return (NULL);
	head->first = NULL;
	head->last = NULL;
	head->size = 0;
	return (head);
}