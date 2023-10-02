/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:19:31 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/19 17:14:27 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	increment(int *i, int *x)
{
	*i = *i + 1;
	*x = *x + 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (to_find[0] == '\0')
		{
			return (str);
		}
		if (str[i] == to_find[n])
		{
			while (to_find[n] == str[i] && to_find[n] != '\0')
			{
				increment(&i, &n);
			}
			if (to_find[n] == '\0')
			{
				return (str + i - n);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	str1[] = "saaaaaataa ola";
	char	str2[] = "at";
	printf("%s", strstr(str1,str2));
	printf("%s", ft_strstr(str1,str2));
}
*/