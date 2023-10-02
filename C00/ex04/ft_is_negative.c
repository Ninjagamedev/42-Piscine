/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:56:42 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/07 13:17:16 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-10);
}
*/