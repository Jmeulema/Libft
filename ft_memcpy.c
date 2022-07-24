/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:44:31 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d1;
	const char	*s1;

	i = 0;
	if (!src && !dst)
		return (NULL);
	d1 = dst;
	s1 = src;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
	// char src[50] = "salut";

	// ft_memcpy((void *)0, src, 5);

	// char d[50] = {1, 2, 3};
	// const char	s[50] = "vous etes fort";

	// printf("%s\n", ft_memcpy(d, s, 3));

	// char d1[50] = {1, 2, 3};
	// const char	s1[50] = "vous etes fort";

	// printf("%s\n", memcpy(d1, s1, 3));
// }