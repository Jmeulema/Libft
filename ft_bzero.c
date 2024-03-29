/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:40:51 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	ft_bzero((void *)0, 3);

// 	char	s[] = "je suis jerome";

// 	ft_bzero(s, 3);
// 	printf("%s\n", s);

// 	char	s1[] = "je suis jerome";

// 	bzero(s1, 3);
// 	printf("%s\n", s1);
// }