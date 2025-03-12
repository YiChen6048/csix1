/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:15:29 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/12 17:09:01 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
         	i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}

int main()
{
	char dest[10];
	ft_strncpy(dest, "hello", 10);

	printf("Result: %s\n", dest);

	return 0;
}
