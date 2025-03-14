/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:01:41 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/14 10:27:46 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int src_len = 0;

	while (src[src_len] != '\0')
		src_len ++;

	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return src_len;
}

int main()
{
	char src[] = "Hello, world!";
	char dest[20];

	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest);
	printf("Source length: %u\n", len);

	return 0;
}
