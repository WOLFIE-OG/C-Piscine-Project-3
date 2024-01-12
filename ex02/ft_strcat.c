/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:20:33 by otodd             #+#    #+#             */
/*   Updated: 2023/10/18 10:48:44 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char *const	cat_string = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (cat_string);
}
/*
int	main(void)
{
	char	dest[] = "test ";
	char	src[] = "test";
	char	dest2[] = "test ";
	char	src2[] = "test";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src2));
	return (0);
}*/
