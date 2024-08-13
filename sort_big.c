/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:48:44 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/26 12:19:03 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_sort_b_till_3(t_stacks **stack_a, t_stacks **stack_b)
{
	int			i;
	t_stacks	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_check_rarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_check_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_check_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_check_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stacks	*ft_sort_b(t_stacks **stack_a)
{
	t_stacks	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_a_to_b(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		push_a_to_b(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		ft_sort_b_till_3(stack_a, &stack_b);
	}
	if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_stacks	**ft_sort_a(t_stacks **stack_a, t_stacks **stack_b)
{
	int			i;
	t_stacks	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_check_rarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rarb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_check_rarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_check_rrarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_execute_rrarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == ft_check_rrarb_a(*stack_a, *stack_b, tmp->nbr))
			{
				i = ft_execute_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			}
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stacks **stack_a)
{
	t_stacks	*stack_b;
	int			i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		swap_a(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, check_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->nbr != check_min(*stack_a))
				rotate_a(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != check_min(*stack_a))
				rev_rotate_a(stack_a, 0);
		}
	}
}
