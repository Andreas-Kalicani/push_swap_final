/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:14:24 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 15:18:44 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi2(const char *str)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			print_error_exit();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		print_error_exit();
	return (mod * i);
}

t_stacks	*ft_sub_process(char **argv)
{
	t_stacks	*stack_a;
	char		**tmp;
	int			i;
	int			j;

	stack_a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		ft_add_back(&stack_a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (stack_a);
}

t_stacks	*ft_process(int argc, char **argv)
{
	t_stacks	*stack_a;
	int			i;
	int			j;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		exit(0);
	if (argc == 2)
		stack_a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			ft_add_back(&stack_a, ft_stack_new(j));
			i++;
		}
	}
	return (stack_a);
}
