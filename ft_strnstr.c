/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:34:22 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/15 13:24:50 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	const char str[]= "Hello, world!";
	const char find[]= "world";
	size_t len = 10;

	char *result = ft_strnstr(str,find,len);
	printf("mine: %s\n", result);
	return 0;
}
*/
