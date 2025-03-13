/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:04:51 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 16:44:56 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i = 0;

	if (str[i]  == '\0')
		return 1;

	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')  
			return 0;
		i++;
	}
	return 1;	
}



int main()
{
	char *str1 = "abc";
	char *str2 = "ABC";
	char *str3 = "aBC";
	char *str4 = "Abc";
	char *str5 = "a1b";
	char *str6 = "";

	printf("Answer 1: %d\n", ft_str_is_lowercase(str1));
	printf("Answer 2: %d\n", ft_str_is_lowercase(str2));
	printf("Answer 3: %d\n", ft_str_is_lowercase(str3));
	printf("Answer 4: %d\n", ft_str_is_lowercase(str4));
	printf("Answer 5: %d\n", ft_str_is_lowercase(str5));
	printf("Answer 6: %d\n", ft_str_is_lowercase(str6));
	
	return 0;
}
