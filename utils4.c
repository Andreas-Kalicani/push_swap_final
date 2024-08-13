/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:43:09 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:19:49 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	ft_find_index(t_stacks *stacks, int nbr)
{
	int	i;

	i = 0;
	while (stacks->nbr != nbr)
	{
		i++;
		stacks = stacks->next;
	}
	stacks->index = 0;
	return (i);
}
