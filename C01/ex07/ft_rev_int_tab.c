/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:14:17 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:40:45 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	middleman;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		middleman = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = middleman;
		count++;
	}
}
/*
int	main(void)
{
	int array[5] = {3, 4, 2, 1, 3};
	int size;
	
	size = 5;
	ft_rev_int_tab(array, size);
}
*/
/*
	count = 0;
	while (count <= size - 1)
	{
		printf("%d", tab[count]);
		count++;
	}*/