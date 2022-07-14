/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 12:37:13 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "     +--+-125857";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));

	char	str1[] = "     -12&5857";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", atoi(str1));

	char	str2[] = "     +125857";

	printf("%d\n", ft_atoi(str2));
	printf("%d\n", atoi(str2));

	char	str3[] = "     ------125857";

	printf("%d\n", ft_atoi(str3));
	printf("%d\n", atoi(str3));
}*/
