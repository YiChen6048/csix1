/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:26:10 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/12 18:11:02 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (1);

	while (str[i] != '\0')
	{
		if((str[i] < 'A' && str[i] > 'Z') ||(str[i] < 'a' && str[i] > 'z'))
			return (0);
		i++;
	}

	return (1);
}

int main()
{
	char str1[] = "abc";
	char str2[] = "123";
	char str3[] = "a1b";
	char str4[] = "";
	char str5[] = "ABC";

	printf("answer1: %d\n", ft_str_is_alpha(str1));
	printf("answer2: %d\n", ft_str_is_alpha(str2));
	printf("answer3: %d\n", ft_str_is_alpha(str3));
	printf("answer4: %d\n", ft_str_is_alpha(str4));
	printf("answer5: %d\n", ft_str_is_alpha(str5));
}
