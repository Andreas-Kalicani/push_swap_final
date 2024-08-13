/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:42:46 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:18:39 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rev_rotate_sub(t_stacks **stack_b, int j)
{
	t_stacks	*tmp;
	int			i;

	i = 0;
	tmp = *stack_b;
	while ((*stack_b)->next)
	{
		i++;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrr\n", 4);
}

void	rev_rotate_a(t_stacks **bottom_a, int j)
{
	t_stacks	*tmp;
	int			i;

	if (!*bottom_a || !(*bottom_a)->next)
		return ;
	i = 0;
	tmp = *bottom_a;
	while ((*bottom_a)->next)
	{
		*bottom_a = (*bottom_a)->next;
		i++;
	}
	(*bottom_a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stacks **bottom_b, int j)
{
	t_stacks	*tmp;
	int			i;

	if (!*bottom_b || !(*bottom_b)->next)
		return ;
	i = 0;
	tmp = *bottom_b;
	while ((*bottom_b)->next)
	{
		i++;
		*bottom_b = (*bottom_b)->next;
	}
	(*bottom_b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrb\n", 4);
}

void	ft_rev_rotate(t_stacks **stack_a, t_stacks **stack_b, int j)
{
	t_stacks	*tmp;
	int			i;

	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	i = 0;
	tmp = *stack_a;
	while ((*stack_a)->next)
	{
		i++;
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	rev_rotate_sub(stack_b, j);
}
