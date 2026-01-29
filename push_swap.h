/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:39:15 by schouite          #+#    #+#             */
/*   Updated: 2026/01/29 19:15:50 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_parse
{
	int				value;
	int				error;
}					t_parse;

typedef struct s_node
{
	int				nbr;
	int				index;
	int				index_max;
	int				push_cost;
	bool			above_mediane;
	bool			cheapeast;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;

}					t_node;

int					parse_args(int argc, char **argv, int *arg);
int					check_intmax(char c, long tmp);
int					check_duplicates(int argc, int *arg);
t_parse				ft_atoi(char *str);
void				print_error(void);
int					is_digit(char c);
int					is_space(char c);
int					check(int argc, char **argv, int *arg);
t_node				*new_node(int content);
bool				append_nd_back(t_node **lst, t_node *new);
bool				int_stack(t_node **lst, int *arg, int argc);
t_node				*find_min(t_node *lst);
t_node				*find_max(t_node *lst);
void				set_index(t_node *lst);
t_node				*ft_extract_last(t_node **lst);
int					mediane(t_node *lst);
bool				is_above_mediane(t_node *lst, int index);
t_node				*is_bigger_nb(t_node *lst, int nb);
t_node				*is_smaller_nb(t_node *lst, int nb);
void				swap(t_node **lst);
void				push(t_node **stack_a, t_node **stack_b);
void				rotate(t_node **lst);
void				reverse_rotate(t_node **lst);
bool				is_three_left(t_node *lst);
t_node				*target_a(t_node *lst, int nb);
t_node				*target_b(t_node *lst, int nb);
int					cost_calculate(t_node *stack_a);
void				double_swap(t_node **stack_a, t_node **stack_b);
void				double_rotate(t_node **stack_a, t_node **stack_b);
void				double_reverse_rotate(t_node **stack_a, t_node **stack_b);
void				three_sort(t_node **lst);
void				refresh_stack_a(t_node *stack_a, t_node *stack_b);
void				refresh_stack_b(t_node *stack_a, t_node *stack_b);
t_node				*get_cheapeast(t_node *stack_a);
void				prep_stack(t_node **stack_a, t_node **stack_b);
void				prep_stack_util(t_node **lst, t_node *node);
void				fill_stack_b(t_node **stack_a, t_node **stack_b);
void				fill_stack_a(t_node **stack_b, t_node **stack_a);
t_node				*algo(t_node **stack_a);
#endif