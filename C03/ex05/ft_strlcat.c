/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:56:11 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/19 17:13:45 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	n;
	int				srcsize;
	int				destsize;

	i = 0;
	n = 0;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < size - 1)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}
/*
int	main(void)
{
	char str1[1000] = " Ola tudo bem";
	char str2[150] = " Sim e contigoaaaaaaaaaaaa";
	//printf("%d", strlcat(str1, str2, 5));
	printf("%d", ft_strlcat(str1, str2, 5));
	printf("%s", str1);
}
*/