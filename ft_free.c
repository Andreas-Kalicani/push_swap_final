/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:58:26 by andreasgjer       #+#    #+#             */
/*   Updated: 2024/03/05 16:08:25 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stacks **stack_a)
{
	t_stacks	*tmp;

	if (!stack_a)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->nbr = 0;
		free(*stack_a);
		*stack_a = tmp;
	}
}
