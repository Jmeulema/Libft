/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 12:39:09 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	s[] = "je suis jerome";

	ft_bzero(s, 3);
	printf("%s\n", s);

	char	s1[] = "je suis jerome";

	bzero(s1, 3);
	printf("%s\n", s1);
}*/