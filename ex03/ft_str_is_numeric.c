/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:42:18 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/12 19:17:59 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return(1);

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9') 
			return(0);
		i++;
	}

	return(1);
}

int main()
{
	char str1[] = "123";
	char str2[] = "abc";
	char str3[] = "ABC";
	char str4[] = "2s3";
	char str5[] = "";
	char str6[] = "a5b";

	printf("test1: %d\n", ft_str_is_numeric(str1));
	printf("test2: %d\n", ft_str_is_numeric(str2));
	printf("test3: %d\n", ft_str_is_numeric(str3));
	printf("test4: %d\n", ft_str_is_numeric(str4));
	printf("test5: %d\n", ft_str_is_numeric(str5));
	printf("test6: %d\n", ft_str_is_numeric(str6));

	return 0;
}
