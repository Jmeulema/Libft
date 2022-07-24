/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:09:48 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:40:35 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int c;

//     c = '1';
//     ft_memset((void *)0, c, 4);

//     int c;
//     char str[] = "j'aime les pommes";

//     c = 'e';
//     printf("%s\n", ft_memset(str, c, 1));
//     printf("%s\n", memset(str, c, 1));

//     c = '1';
//     printf("%s\n", ft_memset(str, c, 3));
//     printf("%s\n", memset(str, c, 3));

//     c = '\0';
//     printf("%s\n", ft_memset(str, c, 5));
//     printf("%s\n", memset(str, c, 5));
// }