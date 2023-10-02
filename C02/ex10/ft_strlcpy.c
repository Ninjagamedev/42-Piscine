/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:56:10 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/19 16:22:00 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				sizeofdest;

	i = 0;
	sizeofdest = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[sizeofdest] != '\0')
	{
		sizeofdest++;
	}
	return (sizeofdest);
}
/*
int main(void)
{
	char dest[100];
	char src[] = "MINECRAFT OH YEAHHa";
	printf("%d", ft_strlcpy(dest, src, 20));
	printf("%s", src);
	printf("%s", dest);
}
*/