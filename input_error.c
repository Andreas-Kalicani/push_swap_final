/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:45:05 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:49:06 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_size_int(int argc, char **argv)
{
	long	num;
	int		i;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num > INTMAX_MAX || num < INTMAX_MIN)
			print_error_exit();
		i++;
	}
}

void	print_error_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	ft_checkdup(t_stacks *a)
{
	t_stacks	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
