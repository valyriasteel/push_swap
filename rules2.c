/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:12:06 by bbosnak           #+#    #+#             */
/*   Updated: 2023/10/26 17:12:07 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ss(t_stack	*stack, int print)
{
	int	tmp;

	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!print)
		write(1, "ss\n", 3);
}

void	rr(t_stack	*stack, int print)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	while (++index < stack->size_a)
		stack->a[index - 1] = stack->a[index];
	stack->a[index - 1] = tmp;
	index = 0;
	tmp = stack->b[index];
	while (++index < stack->size_b)
		stack->b[index - 1] = stack->b[index];
	stack->b[index - 1] = tmp;
	if (!print)
		write(1, "rr\n", 3);
}

void	rrr(t_stack *stack, int print)
{
	int	tmp;
	int	index;

	index = stack->size_a - 1;
	tmp = stack->a[index];
	while (index)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[index] = tmp;
	index = stack->size_b - 1;
	tmp = stack->b[index];
	while (index--)
		stack->b[index] = stack->b[index - 1];
	stack->b[index] = tmp;
	if (!print)
		write(1, "rrr\n", 4);
}

void	sa(t_stack *stack, int print)
{
	int	tmp;

	tmp = 0;
	if (stack->size_a < 2)
	{
		write(2, "A few argument\n", 15);
		return ;
	}
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (!print)
		write(1, "sa\n", 3);
}

void	rra(t_stack *stack, int print)
{
	int	tmp;
	int	index;

	index = stack->size_a - 1;
	tmp = stack->a[index];
	while (index)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[index] = tmp;
	if (!print)
		write(1, "rra\n", 4);
}
