/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:11:08 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/26 12:19:10 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap_push(t_stacks **stack_a, t_stacks **stack_b, int j)
{
	t_stacks	*tmp;

	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}

void	swap_a(t_stacks **head_a, int print)
{
	t_stacks	*tmp;

	if (!*head_a || !((*head_a)->next))
		return ;
	tmp = *head_a;
	*head_a = (*head_a)->next;
	tmp->next = (*head_a)->next;
	(*head_a)->next = tmp;
	if (print == 0)
		write(1, "sa\n", 3);
}

void	swap_b(t_stacks **head_b, int print)
{
	t_stacks	*tmp;

	if (!*head_b || !((*head_b)->next))
		return ;
	tmp = *head_b;
	*head_b = (*head_b)->next;
	tmp->next = (*head_b)->next;
	(*head_b)->next = tmp;
	if (print == 0)
		write(1, "sb\n", 3);
}
