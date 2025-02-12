/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmed <kahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:14:52 by kahmed            #+#    #+#             */
/*   Updated: 2024/11/15 15:44:03 by kahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	whitespaces(char *str, int *ptr_sign)
{
	int	i;

	i = 0;
	*ptr_sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*ptr_sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = whitespaces((char *)str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
/*
int main()
{
	const char *test = "			-1234ab567";
	printf("mine: %d\n", ft_atoi(test));
	printf("theirs:%d\n",atoi(test));
	return 0;
}
*/
