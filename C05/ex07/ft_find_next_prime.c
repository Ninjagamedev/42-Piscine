/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:20:50 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/21 17:58:35 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= 46430 && i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	primefound;

	prime = nb;
	primefound = 0;
	if (nb <= 1)
		return (2);
	while (primefound == 0)
	{
		prime++;
		if (ft_is_prime(prime) == 1)
		{
			primefound = 1;
		}
	}
	return (prime);
}
/*
int main (void)
{
	printf("%d", ft_find_next_prime(150));
}
*/