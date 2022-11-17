/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:24:07 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/17 15:54:05 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>
#include <limits.h>
# include "../libftprintf/inc/ft_printf.h"
# include "../libftprintf/inc/libft.h"

typedef struct s_stack
{
	int value;
	int index;
	int pos;
	int target_pos;
	int cost_a;
	int cost_b;
	int counter;
	int counter2;
	int len;
	struct s_stack *next;	
} t_stack;


//push-swap actions
void		ft_rotate(t_stack **mystack);
void		ft_reverse_rotate(t_stack **mystack);
void 		ft_swap_stack(t_stack **stack);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_pa(t_stack **stack_b, t_stack **stack_a);

//utils
int 		len_of_list(t_stack **head);
int 		find_len_of_arr(int *val);
int			ft_strcmp(char *s1, char *s2);
int			ft_isdigit_mod(int c);
long int	ft_atoi_mod(const char *str);
t_stack		*lst_lstlast(t_stack *head);
void 		ft_swap(int *a, int *b);

//for node scanning and checking
void		print_nodes_val(t_stack **head);
void 		print_nodes_index(t_stack **head);
void		print_nodes_pos(t_stack **head);

//parser functions
void 		allocate_and_fill_a(t_stack **head, int *val, int l);
int 		*check_for_entry (char **argv, int argc);
int 		check_dup(char **argv);
int 		max_min_check (char **argv);
int 		if_sorted (char **argv);

//sorting
void 		sort_three(t_stack **stack_a);
int 		*sort_bubble_index(int *values, int argc);
void 		assign_index (int *sorted, t_stack **stack);
void		put_to_b(t_stack **stack_a, t_stack **stack_b);
void		sort_5_100(t_stack **stack_a, t_stack **stack_b);
void		set_positions(t_stack **stack_a, t_stack **stack_b);