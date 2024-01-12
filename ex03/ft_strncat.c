/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:20:33 by otodd             #+#    #+#             */
/*   Updated: 2023/10/18 10:55:03 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_len;
	unsigned int	index;

	index = 0;
	d_len = ft_strlen(dest);
	while (index < nb && src[index] != '\0')
	{
		dest[d_len + index] = src[index];
		index++;
	}
	dest[d_len + index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Hello, ";
	char	dest2[] = "Hello, ";
	char	src[] = "World!";
	char	src2[] = "World!";

	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", strncat(dest2, src2, 3));
	return (0);
}*/
