/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:20:33 by otodd             #+#    #+#             */
/*   Updated: 2023/10/18 11:43:37 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *const		cat_string = dest;
	unsigned int	dest_len;
	unsigned int	d_offset;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	d_offset = dest_len;
	index = 0;
	while (src[index] != '\0' && index < size)
	{
		if (size != 1)
		{
			dest[d_offset] = src[index];
			d_offset++;
			size--;
		}
		index++;
	}
	dest[d_offset] = '\0';
	return (ft_strlen(cat_string) + size);
}
/*
int	main(void)
{
	char	dest[] = "Hello111111111111111";
	char	src[] = "Hello111111111111111";

	printf("%d\n", ft_strlcat(dest, src, 1));
	printf("%zu\n", strlcat(dest, src, 1));
	return (0);
}*/
