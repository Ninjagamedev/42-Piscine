/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:55:23 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:34:24 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	middleman;

	middleman = *a;
	*a = *b;
	*b = middleman;
}
/*
int	main(void)
{
	int	value1;
	int	value2;

	value1 = 10;
	value2 = 50;
	ft_swap(&value1, &value2);
	printf("%d", value1);
	printf("%d", value2);
}
*/