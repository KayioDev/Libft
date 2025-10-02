/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:41:04 by klima-do          #+#    #+#             */
/*   Updated: 2025/09/30 19:58:05 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_split(char **arr_ptr)
{
	int	index;

	index = 0;
	if (!arr_ptr)
		return (NULL);
	while (arr_ptr[index])
	{
		free(arr_ptr[index]);
		index++;
	}
	free(arr_ptr);
	return (NULL);
}
#include <string.h>

int main(void)
{
	t_stack	*stack;
	t_stack	*stackb;

	char	*nome;
	char	*sobrenome;
	char	*idade;

	init_stack(&stack);
	init_stack(&stackb);
	nome = strdup("kaio");
	sobrenome = strdup("lima dos santos");
	idade = strdup("25");
	push(stack, idade);
	push(stack, sobrenome);
	push(stack, nome);
	while (stack->top)
	{
		char *deletado = pop(stack);
		push(stackb, deletado);

	}
	t_list *cur = stackb->top;
	while (cur)
	{
	    printf("%s\n", (char *)cur->content);
    	cur = cur->next;
	}
	stack_clear(stackb, free); // libera conteúdo + nós
	free(stackb);

	stack_clear(stack, free);
	free(stack);

}