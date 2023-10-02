/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:27:19 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:41:38 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	doswitch(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	flag;

	n = 0;
	while (n < size)
	{
		flag = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				doswitch(&tab[i - 1], &tab[i]);
				flag = 1;
			}
			i++;
		}
		if (flag == 0)
		{
			break ;
		}
		n++;
	}
}

	/*n = 0;
	while(n < size)
	{
		printf("%d", tab[n]);
		n++;
	}*/
/*
int	main(void)
{
	int	array[6] = {3, 4, 1, 420, 2, 5};
	int size;

	size = 6;
	ft_sort_int_tab(array, size);
}
*/