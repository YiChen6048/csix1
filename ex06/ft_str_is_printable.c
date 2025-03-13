/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:20:19 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/13 17:37:02 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printale(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return 1;

	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	printf("Answer 1: %d\n", ft_str_is_printale("Hello!"));
	printf("Answer 2: %d\n", ft_str_is_printale(" "));
	printf("Answer 3: %d\n", ft_str_is_printale("\n"));
	printf("Answer 4: %d\n", ft_str_is_printale("Test\x01"));
	printf("Answer 5: %d\n", ft_str_is_printale(""));
	printf("Answer 6: %d\n", ft_str_is_printale("12345"));
	return 0;
}
