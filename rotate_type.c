/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:25:31 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/26 12:18:46 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_stacks *stack_a, t_stacks *stack_b)
{
	int			i;
	t_stacks	*tmp;

	tmp = stack_b;
	i = ft_check_rrarrb_a(stack_a, stack_b, stack_b->nbr);
	while (tmp)
	{
		if (i > ft_check_rarb_a(stack_a, stack_b, tmp->nbr))
			i = ft_check_rarb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rrarrb_a(stack_a, stack_b, tmp->nbr))
			i = ft_check_rrarrb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rarrb_a(stack_a, stack_b, tmp->nbr))
			i = ft_check_rarrb_a(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rrarb_a(stack_a, stack_b, tmp->nbr))
			i = ft_check_rrarb_a(stack_a, stack_b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stacks *stack_a, t_stacks *stack_b)
{
	int			i;
	t_stacks	*tmp;

	tmp = stack_a;
	i = ft_check_rrarrb(stack_a, stack_b, stack_a->nbr);
	while (tmp)
	{
		if (i > ft_check_rarb(stack_a, stack_b, tmp->nbr))
			i = ft_check_rarb(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rrarrb(stack_a, stack_b, tmp->nbr))
			i = ft_check_rrarrb(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rarrb(stack_a, stack_b, tmp->nbr))
			i = ft_check_rarrb(stack_a, stack_b, tmp->nbr);
		if (i > ft_check_rrarb(stack_a, stack_b, tmp->nbr))
			i = ft_check_rrarb(stack_a, stack_b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
