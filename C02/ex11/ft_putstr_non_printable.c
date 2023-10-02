/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:19:48 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/19 16:21:08 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	convert(char *hex1, char *hex2)
{
	if (*hex1 < 10)
	{
		*hex1 = '0' + *hex1;
	}
	else
	{
		*hex1 = 'A' + (*hex1 - 10);
	}
	if (*hex2 < 10)
	{
		*hex2 = '0' + *hex2;
	}
	else
	{
		*hex2 = 'A' + (*hex2 - 10);
	}
	if (*hex2 >= 'A' && *hex2 <= 'Z')
		*hex2 = *hex2 + 32;
}

void	ft_putstr_non_printable(char *str)
{
	char	doubleslash;
	char	char1;
	char	char2;
	int		i;

	i = 0;
	doubleslash = '\\';
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			char1 = (str[i] >> 4) & 0xF;
			char2 = str[i] & 0xF;
			convert(&char1, &char2);
			write(1, &doubleslash, 1);
			write(1, &char1, 1);
			write(1, &char2, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "Ola\nesta bem?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}
*/