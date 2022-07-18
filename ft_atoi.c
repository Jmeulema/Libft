/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/18 12:51:33 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		if (sign * result > INT_MAX)
			return (-1);
		if (sign * result < INT_MIN)
			return (0);
		str++;
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

	char	str4[] = "\e06050";

	printf("%d\n", ft_atoi(str4));
	printf("%d\n", atoi(str4));

	char	str5[] = "99999999999999999999999999";

	printf("%d\n", ft_atoi(str5));
	printf("%d\n", atoi(str5));
}*/
