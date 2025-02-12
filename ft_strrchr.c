/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:04:16 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/22 18:44:21 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	find;
	size_t	i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	const char s[] = "yowasgood";
	if (ft_strrchr(s, 0) == s + ft_strlen(s)) {
        printf("Test passed\n");
    } else {
        printf("Test failed\n");
    }
    return 0;
}
*/
