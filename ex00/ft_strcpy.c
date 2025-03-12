/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:23:28 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/12 14:47:04 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_strcpy(dest, src);
	printf("Copied string: %s\n", dest);

	return 0;
}
