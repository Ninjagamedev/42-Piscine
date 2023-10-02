/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:07:14 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/20 00:14:16 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	definirvariaveis(int *i, int *isnegative, int *flag, int *inteiro)
{
	*i = 0;
	*isnegative = 1;
	*flag = 0;
	*inteiro = 0;
}

int	ft_atoi(char *str)
{
	int	i;
	int	isnegative;
	int	flag;
	int	inteiro;

	definirvariaveis(&i, &isnegative, &flag, &inteiro);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isnegative = -isnegative;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		inteiro = inteiro * 10 + str[i] - '0';
		i++;
	}
	return (inteiro * isnegative);
}
/*
int main(void)
{
	char teste[] = "  ++++1a-23ola123";
	printf("%d", atoi(teste));
	printf("%d", ft_atoi(teste));
}
*/