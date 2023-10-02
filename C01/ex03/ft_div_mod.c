/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:02:26 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:35:19 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	valor1;
	int	valor2;
	int	div;
	int	rest;

	valor1 = 50;
	valor2 = 3;
	ft_div_mod(valor1, valor2, &div, &rest);
	printf("%d", div);
	printf("%d", rest);
}
*/