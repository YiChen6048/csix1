/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:55:29 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 17:07:38 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return 1;

	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	char *str1 = "ABC";
	char *str2 = "Abc";
	char *str3 = "aBC";
	char *str4 = "A12";
	char *str5 = "";
	char *str6 = "ABc";

	printf("Answer 1: %d\n", ft_str_is_uppercase(str1));
	printf("Answer 2: %d\n", ft_str_is_uppercase(str2));
	printf("Answer 3: %d\n", ft_str_is_uppercase(str3));
	printf("Answer 4: %d\n", ft_str_is_uppercase(str4));
	printf("Answer 5: %d\n", ft_str_is_uppercase(str5));
	printf("Answer 6: %d\n", ft_str_is_uppercase(str6));

	return 0;
}
