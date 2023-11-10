/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:12:30 by bbosnak           #+#    #+#             */
/*   Updated: 2023/10/26 17:12:31 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_push_swap(char **av, int alloc)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	stack.is_alloc = alloc;
	size = ft_ps_strlen(av);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(av[i], &stack, av);
	ft_check_repeat(&stack, size, av);
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
	{
		free (stack.a);
		return ;
	}
	stack.size_b = 0;
	ft_sort(&stack, size);
	free (stack.a);
	free (stack.b);
}

void	ft_free_split(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

int	main(int ac, char **av)
{
	int	is_alloc;

	is_alloc = 0;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			av = ft_split(*av, ' ');
			is_alloc = 1;
		}
		ft_push_swap(av, is_alloc);
	}
	if (is_alloc)
		ft_free_split(av);
	return (0);
}
