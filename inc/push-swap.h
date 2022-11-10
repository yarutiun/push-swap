/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:24:07 by yarutiun          #+#    #+#             */
/*   Updated: 2022/11/10 17:42:20 by yarutiun         ###   ########.fr       */
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


//pushing and swapping and so on
void allocate_and_fill_a(t_stack **head, int *val, int l);
int find_len_of_arr(int *val);
void ft_sa(t_stack **stack_a);
void ft_sb(t_stack **stack_b);
void ft_ra(t_stack **stack_a);
void ft_sb(t_stack **stack_b);
int len_of_list(t_stack **head);

//utils
void print_err(char *msg);
void print_nodes(t_stack **head);
void ft_ra(t_stack **stack_a);
void ft_sb(t_stack **stack_b);
void ft_rra(t_stack **stack_a);
int *check_for_entry (char **argv);
int check_dup(char **argv);
int	ft_strcmp(char *s1, char *s2);
int	ft_isdigit_mod(int c);
int max_min_check (char **argv);
long int	ft_atoi_mod(const char *str);
int if_sorted (char **argv);