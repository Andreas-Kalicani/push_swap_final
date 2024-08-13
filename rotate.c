/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:03:44 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:18:53 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate(t_stacks **stack_a, t_stacks **stack_b, int j)
{
	t_stacks	*tmp;

	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_a;
	*stack_a = ft_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	tmp = *stack_b;
	*stack_b = ft_lstlast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rr\n", 3);
}

void	rotate_a(t_stacks **head_a, int j)
{
	t_stacks	*tmp;

	if (!*head_a || !(*head_a)->next)
		return ;
	tmp = *head_a;
	*head_a = ft_lstlast(*head_a);
	(*head_a)->next = tmp;
	*head_a = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stacks **head_b, int j)
{
	t_stacks	*tmp;

	if (!*head_b || !(*head_b)->next)
		return ;
	tmp = *head_b;
	*head_b = ft_lstlast(*head_b);
	(*head_b)->next = tmp;
	*head_b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}
