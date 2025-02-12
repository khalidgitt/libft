/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:20:51 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/15 13:42:08 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dupe;
	size_t	i;

	i = 0;
	len = ft_strlen(s) + 1;
	dupe = (char *)malloc(len);
	if (!dupe)
		return (0);
	while (i < len)
	{
		dupe[i] = s[i];
		i++;
	}
	return (dupe);
}
