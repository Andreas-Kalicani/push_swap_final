/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:30:33 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 12:19:24 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

void	print_stack_a(t_stacks *head_a)
{
	t_stacks	*current_node;

	current_node = head_a;
	while (current_node != NULL)
	{
		printf("%ld ", current_node->nbr);
		current_node = current_node->next;
	}
	printf("\n");
}

void	print_stack_b(t_stacks **head_b)
{
	t_stacks	*current_node;

	current_node = *head_b;
	while (current_node != NULL)
	{
		printf("%ld ", current_node->nbr);
		current_node = current_node->next;
	}
	printf("\n");
}

int	ft_isdigit(int c)
{
	while (c)
	{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
