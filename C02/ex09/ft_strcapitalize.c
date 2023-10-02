/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:10:30 by alalmeid          #+#    #+#             */
/*   Updated: 2023/09/19 16:49:37 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	uppercase(char *letra)
{
	*letra = *letra - 32;
}

void	lowercase(char *letra)
{
	*letra = *letra + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if ((i == 0 && (str[i] >= 'a' && str[i] <= 'z')))
			{
				uppercase(&str[i]);
			}
			else if ((str[i -1] < 65 || str[i -1] > 90)
				&& (str[i -1] < 97 || str[i -1] > 122))
			{
				if ((str[i -1] < '0' || str[i -1] > '9') 
					&& (str[i] >= 'a' && str[i] <= 'z'))
					uppercase(&str[i]);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				lowercase(&str[i]);
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char ola[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(ola));
}
*/