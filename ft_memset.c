/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:53:10 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/06 14:30:02 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void	*ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (i < len)
	{
		p[i++] = (unsigned char)c;
	}
	return (ptr);
}
