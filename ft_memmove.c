/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:44:57 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src[50] = "hello";

// 	ft_memmove((void *)0, src, 7);

	// char d[10] = "salut";
	// const char	s[15] = "je suis jerome";

	// printf("%s\n", ft_memmove(d, s, 3));

	// char d1[10] = "salut";
	// const char	s1[15] = "je suis jerome";

	// printf("%s\n", memmove(d1, s1, 3));

	// char d2[10] = "salut";
	// const char	s2[15] = "je suis jerome";

	// printf("%s\n", ft_memmove(d2, s2, 7));

	// char d3[10] = "salut";
	// const char	s3[15] = "je suis jerome";

	// printf("%s\n", memmove(d3, s3, 7));

	// char d4[15] = "salut gamin";
	// const char	s4[10] = "hello";

	// printf("%s\n", ft_memmove(d4, s4, 5));

	// char d5[15] = "salut gamin";
	// const char	s5[10] = "hello";

	// printf("%s\n", memmove(d5, s5, 5));

	// char d6[15] = "salut gamin";
	// const char	s6[10] = "hello";

	// printf("%s\n", ft_memmove(d6, s6, 7));

	// char d7[15] = "salut gamin";
	// const char	s7[10] = "hello";

	// printf("%s\n", memmove(d7, s7, 7));
// }