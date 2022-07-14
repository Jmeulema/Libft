/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:35:10 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 13:27:49 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
    int	c;

	c = 'a';
	printf("%d\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c));
    printf("%d\n", toupper(c));
	printf("%c\n", toupper(c));
}*/