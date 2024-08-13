/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:06:07 by akalican          #+#    #+#             */
/*   Updated: 2024/03/26 13:05:07 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacks
{
	struct s_stacks	*next;
	long			index;
	long			nbr;
}					t_stacks;

/*linked_list_a*/

/*utils*/
int					ft_atoi(const char *str);
void				print_stack_a(t_stacks *head_a);
void				print_stack_b(t_stacks **head_b);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);

/*utils_2.c*/
void				ft_putstr_fd(char *s, int fd);

/*push_a_to_b*/
void				push_a_to_b(t_stacks **stack_a, t_stacks **stack_b, int j);

/*push_b_to_a*/
void				push_b_to_a(t_stacks **stack_b, t_stacks **stack_a, int j);

/*swap.c*/
void				swap_a(t_stacks **head_a, int print);
void				swap_b(t_stacks **head_b, int print);
void				swap_push(t_stacks **stack_a, t_stacks **stack_b, int j);

/*rotate.c*/
void				rotate_a(t_stacks **head_a, int print);
void				rotate_b(t_stacks **head_b, int j);
void				rotate(t_stacks **stack_a, t_stacks **stack_b, int j);

/*void    rev_rotate.c  */
void				rev_rotate_a(t_stacks **bottom_a, int j);
void				rev_rotate_b(t_stacks **bottom_b, int j);
void				rev_rotate_sub(t_stacks **stack_b, int j);
void				ft_rev_rotate(t_stacks **stack_a, t_stacks **stack_b,
						int j);

/* check_max_min_a.c */
int					check_min(t_stacks *stack);
int					check_max(t_stacks *stack_a);
int					ft_lstsize(t_stacks *lst);

/* check_max_min_b.c */

/*input_error.c*/
void				print_error_exit(void);
void				check_size_int(int argc, char **argv);
int					ft_checkdup(t_stacks *a);

/* utils3.c */
t_stacks			*ft_lstlast(t_stacks *lst);
int					ft_find_place_a(t_stacks *head_a, int nbr_of_push);
int					ft_find_place_b(t_stacks *head_b, int nbr_of_push);
/* utils4.c*/
int					ft_find_index(t_stacks *stacks, int nbr);

/* utils5.c */
int					ft_atoi2(const char *str);

/* split.c */
char				**ft_split(char const *s, char c);

/* ft_add_node_back.c */
void				ft_add_back(t_stacks **stack, t_stacks *stack_new);

/*void	ft_freestr */
void				ft_freestr(char **lst);

/* ft_checkedsorted.c */
int					ft_checksorted(t_stacks *stack);

/* executing.c */
int					ft_execute_rarb(t_stacks **stack_a, t_stacks **stack_b,
						int c, char s);
int					ft_execute_rrarrb(t_stacks **stack_a, t_stacks **stack_b,
						int c, char s);
int					ft_execute_rrarb(t_stacks **stack_a, t_stacks **stack_b,
						int c, char s);
int					ft_execute_rarrb(t_stacks **stack_a, t_stacks **stack_b,
						int c, char s);

/* checking_ab.c */
int					ft_check_rarb(t_stacks *stack_a, t_stacks *stack_b, int c);
int					ft_check_rrarrb(t_stacks *stack_a, t_stacks *stack_b,
						int c);
int					ft_check_rrarb(t_stacks *stack_a, t_stacks *stack_b, int c);
int					ft_check_rarrb(t_stacks *stack_a, t_stacks *stack_b, int c);

/*checking_ba*/
int					ft_check_rarb_a(t_stacks *stack_a, t_stacks *stack_b,
						int c);
int					ft_check_rrarrb_a(t_stacks *stack_a, t_stacks *stack_b,
						int c);
int					ft_check_rarrb_a(t_stacks *stack_a, t_stacks *stack_b,
						int c);
int					ft_check_rrarb_a(t_stacks *stack_a, t_stacks *stack_b,
						int c);

/*rotate_type.c*/
int					ft_rotate_type_ba(t_stacks *stack_a, t_stacks *stack_b);
int					ft_rotate_type_ab(t_stacks *stack_a, t_stacks *stack_b);

/*sort_three.c*/
void				ft_sort_three(t_stacks **stack_a);

/*ft_free.c*/
void				ft_free(t_stacks **stack_a);

/*sort_big*/
void				ft_sort_b_till_3(t_stacks **stack_a, t_stacks **stack_b);
t_stacks			*ft_sort_b(t_stacks **stack_a);
t_stacks			**ft_sort_a(t_stacks **stack_a, t_stacks **stack_b);
void				ft_sort(t_stacks **stack_a);

/*utils5.c*/
int					ft_atoi2(const char *str);
t_stacks			*ft_sub_process(char **argv);
t_stacks			*ft_process(int argc, char **argv);

t_stacks			*ft_stack_new(int content);

void				ft_add_back(t_stacks **stack, t_stacks *stack_new);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);

#endif
