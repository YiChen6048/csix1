/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:58:19 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 20:27:45 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != '\0')
	{

		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;	
			new_word = 0;
			
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return str;
}

int main()
{
	char test1[] = "hello 1WORLD! this is a tEsT.";

	printf("answer1: %s\n", ft_strcapitalize(test1));

	return 0;
}
