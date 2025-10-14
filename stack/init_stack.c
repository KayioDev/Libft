/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:24:56 by klima-do          #+#    #+#             */
/*   Updated: 2025/10/14 14:53:28 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	init_stack(t_stack **stack)
{
	if (!stack)
		return ;
	*stack = malloc(sizeof(t_stack));
	if (!*stack)
		return ;
	(*stack)->top = NULL;
	(*stack)->size = 0;
}
