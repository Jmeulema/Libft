/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 13:07:45 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d1;
	const char	*s1;

	i = 0;
	d1 = dst;
	s1 = src;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char d[50] = {0};
	const char	s[50] = "je suis jerome";

	printf("%s\n", ft_memcpy(d, s, 3));

	char d1[50] = { 0 };
	const char	s1[50] = "je suis jerome";

	printf("%s\n", memcpy(d1, s1, 3));
}*/