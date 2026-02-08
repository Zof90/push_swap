/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:38:45 by schouite          #+#    #+#             */
/*   Updated: 2026/02/06 19:23:00 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "push_swap.h"
# include "stdio.h"

void	swap_checker(t_node **lst);
void	push_checker(t_node **stack_a, t_node **stack_b);
void	rotate_checker(t_node **lst);
void	reverse_rotate_checker(t_node **lst);
void	double_swap_checker(t_node **stack_a, t_node **stack_b);
void	double_rotate_checker(t_node **stack_a, t_node **stack_b);
void	double_reverse_rotate_checker(t_node **stack_a, t_node **stack_b);
bool	is_sorted_checker(t_node *stack_a);
bool	is_it_push(char *str);
bool	is_it_double_rotate(char *str);
bool	is_it_rotate(char *str);
bool	is_it_swap(char *str);
void	push_fonction(char *str, t_node **stack_a, t_node **stack_b);
void	swap_fonction(char *str, t_node **stack_a, t_node **stack_b);
void	rotate_fonction(char *str, t_node **stack_a, t_node **stack_b);
void	double_rotate_fonction(char *str, t_node **stack_a, t_node **stack_b);
int		algo_checker(t_node **stack_a);
#endif