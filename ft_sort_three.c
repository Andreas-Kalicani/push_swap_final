/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:04:58 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:17:23 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_sort_three(t_stacks **stack_a)
{
	if (check_min(*stack_a) == (*stack_a)->nbr)
	{
		rev_rotate_a(stack_a, 0);
		swap_a(stack_a, 0);
	}
	else if (check_max(*stack_a) == (*stack_a)->nbr)
	{
		rotate_a(stack_a, 0);
		if (!ft_checksorted(*stack_a))
			swap_a(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, check_max(*stack_a)) == 1)
			rev_rotate_a(stack_a, 0);
		else
			swap_a(stack_a, 0);
	}
}
