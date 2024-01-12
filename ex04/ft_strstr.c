/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:40:46 by otodd             #+#    #+#             */
/*   Updated: 2023/10/18 11:23:04 by otodd            ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	char	*sub_string;

	sub_string = to_find;
	while (*str)
	{
		if (*to_find == '\0')
			return (str - ft_strlen(sub_string));
		while (*str == *to_find)
			to_find++;
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strstr("this is testsadasdadstasdas string", "test"));
	printf("%s\n", strstr("this is testsadasdadstasdas string", "test"));
	return (0);
}*/
