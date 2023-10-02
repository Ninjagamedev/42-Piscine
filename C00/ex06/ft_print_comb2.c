/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:13:32 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 16:30:34 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	doifbetween(char *x, char *y)
{
	if (*x == ':')
	{
		*x = *y - 1;
	}
}

void	generatevalues(char *a, char *b, char *c, char *d)
{
	*a = '/';
	*b = '/';
	*c = '/';
	*d = '/';
}

void	printvalues(char *a, char *b, char *c, char *d)
{
	write(1, a, 1);
	write(1, b, 1);
	write(1, " ", 1);
	write(1, c, 1);
	write(1, d, 1);
	if (!(*a == '9' && *b == '8' && *c == '9' && *d == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	generatevalues(&a, &b, &c, &d);
	while (a++ < '9')
	{
		c = a - 1;
		while (b++ < '9')
		{
			d = b;
			while (c++ < '9')
			{
				while (d++ < '9')
				{
					printvalues(&a, &b, &c, &d);
				}
				d = '/';
			}
			doifbetween(&c, &a);
		}
		b = '/';
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/