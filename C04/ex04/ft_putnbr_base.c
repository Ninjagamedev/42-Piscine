/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:55:54 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/21 14:12:35 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	startvalues(int *i, int *size_base, int *nbr, long *nbr2)
{
	*i = 0;
	*size_base = 0;
	*nbr2 = *nbr;
}

void	handleminvalue(int *nbr, long *nbr2)
{
	if (*nbr2 == -2147483648)
	{
		write(1, "-", 1);
		*nbr2 = *nbr;
		*nbr2 = -*nbr2;
	}
	else if (*nbr < 0)
	{
		*nbr2 = -*nbr;
		write(1, "-", 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	long	nbr2;
	int		nbr_final[100];
	int		i;

	startvalues(&i, &size_base, &nbr, &nbr2);
	if (check_base(base))
	{
		handleminvalue(&nbr, &nbr2);
		while (base[size_base])
			size_base++;
		if (nbr2 == 0)
			write(1, &base[0], 1);
		while (nbr2)
		{
			nbr_final[i] = nbr2 % size_base;
			nbr2 = nbr2 / size_base;
			i++;
		}
		while (--i >= 0)
			write(1, &base[nbr_final[i]], 1);
	}
}
/*
int main(void)
{
	int i = 0;
	char base[] = "0123456789ABCDEF";
	
	ft_putnbr_base(i, base);
}
*/