/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:31 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/14 16:54:16 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*result;

	len = ft_get_len(n);
	nb = n;
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		result[0] = '\0';
	result[len--] = '\0';
	while (nb)
	{
		result[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(42));
}*/
