/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:16:40 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:35:57 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	backupa;

	backupa = *a;
	*a = *a / *b;
	*b = backupa % *b;
}
/*
int	main(void)
{
	int valor1;
	int valor2;

	valor1= 10;
	valor2= 7;
	ft_ultimate_div_mod(&valor1, &valor2);
	printf("%d", valor1);
	printf("%d", valor2);
}
*/