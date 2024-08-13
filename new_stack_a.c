/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:51:29 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:20:19 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*ft_stack_new(int content)
{
	t_stacks	*new;

	new = malloc(sizeof(t_stacks));
	if (!new)
		print_error_exit();
	new->nbr = content;
	new->next = NULL;
	return (new);
}
