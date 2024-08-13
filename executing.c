/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:20:13 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 13:56:01 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_execute_rarb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c && ft_find_place_b(*stack_b, c) > 0)
			rotate(stack_a, stack_b, c);
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			rotate(stack_a, stack_b, 0);
		while ((*stack_b)->nbr != c)
			rotate_b(stack_b, 0);
		while (ft_find_place_a(*stack_a, c) > 0)
			rotate_a(stack_a, 0);
		push_b_to_a(stack_a, stack_b, 0);
	}
	return (-1);
}

int	ft_execute_rrarrb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c && ft_find_place_b(*stack_b, c) > 0)
			ft_rev_rotate(stack_a, stack_b, 0);
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rev_rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->nbr != c && ft_find_place_a(*stack_a, c) > 0)
			ft_rev_rotate(stack_a, stack_b, 0);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b, 0);
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a, 0);
		push_b_to_a(stack_a, stack_b, 0);
	}
	return (-1);
}

int	ft_execute_rrarb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rev_rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			rev_rotate_a(stack_a, 0);
		while ((*stack_b)->nbr != c)
			rotate_b(stack_b, 0);
		push_b_to_a(stack_a, stack_b, 0);
	}
	return (-1);
}

int	ft_execute_rarrb(t_stacks **stack_a, t_stacks **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->nbr != c)
			rotate_a(stack_a, 0);
		while (ft_find_place_b(*stack_b, c) > 0)
			rev_rotate_b(stack_b, 0);
		push_a_to_b(stack_a, stack_b, 0);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			rotate_a(stack_a, 0);
		while ((*stack_b)->nbr != c)
			rev_rotate_b(stack_b, 0);
		push_b_to_a(stack_a, stack_b, 0);
	}
	return (-1);
}
