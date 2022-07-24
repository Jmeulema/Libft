/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:39:50 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:45:46 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int c;

//     c = 'e';
//     ft_memchr((void *)0, c, 5);

//     int c;
//     char s[] = "j'aime les pommes";

//     c = 'e';
//     printf("%s\n", ft_memchr(s, c, 10));
//     printf("%s\n", memchr(s, c, 10));

//     c = 'e';
//     printf("%s\n", ft_memchr(s, c, 5));
//     printf("%s\n", memchr(s, c, 5));

// 	c = 'z';
//     printf("%s\n", ft_memchr(s, c, 10));
//     printf("%s\n", memchr(s, c, 10));

// 	char s1[] = "je suis un ? et un /";

//     c = '?';
//     printf("%s\n", ft_memchr(s1, c, 20));
//     printf("%s\n", memchr(s1, c, 20));

//     c = '\0';
//     printf("%s\n", ft_memchr(s, c, 4));
//     printf("%s\n", memchr(s, c, 4));

// 	char s2[] = "";

//     c = '\0';
//     printf("%s\n", ft_memchr(s2, c, 4));
//     printf("%s\n", memchr(s2, c, 4));
// }