/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:22:33 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/15 13:23:10 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstlen > 0)
	{
		while (i < dstlen - 1 && src[i] != '\0')
		{
			dst[i] = src [i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <bsd/string.h>
int main()
{
	char src[] = "yassss! slay queen";
	char dest[8];
	size_t res;

	res = strlcpy(dest,src,0);
	printf("Copied: %s\n", dest);
	printf("size:%zu\n", res);
	return 0;
}
*/
