/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:50:10 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:15:37 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_rarb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = ft_find_place_b(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}

int	ft_check_rrarrb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	if ((i < (ft_lstsize(stack_a) - ft_find_index(stack_a, c)))
		&& ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	return (i);
}

int	ft_check_rrarb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = ft_find_place_b(stack_b, c) + i;
	return (i);
}

int	ft_check_rarrb(t_stacks *stack_a, t_stacks *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
