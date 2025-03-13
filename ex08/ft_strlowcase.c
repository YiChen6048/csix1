/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:50 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 19:06:03 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
	}
		i++;
	}
	return str;
}

int main()
{
	char test1[] = "HELLo woRLD!";
	char test2[] = "42 IS GreAT";
	char test3[] = "COdinG Is FUn";

	printf("Answer 1: %s\n", ft_strlowcase(test1));
	printf("Answer 2: %s\n", ft_strlowcase(test2));
	printf("Answer 3: %s\n", ft_strlowcase(test3));

	return 0;
}
