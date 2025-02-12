/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:39:42 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/15 14:09:18 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char test[]= "yowasgood";
	int target = 'w';
	char *result;
	char *result1;
	result = ft_memchr(test,target, 5);
	result1 = memchr(test, target, 5);

	printf("mine:%s\n",result);
	printf("theirs:%s\n",result1);
	return 0;
}
*/
