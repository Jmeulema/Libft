/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:41 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:46:05 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	ft_strlen((void *)0);
// 	char	s[] = "pomme";
// 	char	c[] = " ";

// 	printf("%zu\n", ft_strlen(s));
// 	printf("%zu\n", strlen(s));
// 	printf("%zu\n", ft_strlen(c));
// 	printf("%zu\n", strlen(c));
// }
