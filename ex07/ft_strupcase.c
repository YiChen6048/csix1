/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:06:33 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 18:31:31 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}


int main()
{

	char test1[] = "hello world!";
	char test2[] = "42 is great";
    	char test3[] = "cOdInG Is FuN!";

	printf("answer 1: %s\n", ft_strupcase(test1));
	printf("answer 2: %s\n", ft_strupcase(test2));
	printf("answer 3: %s\n", ft_strupcase(test3));

	return 0;
}
