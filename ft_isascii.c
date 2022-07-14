/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:30:50 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 12:59:58 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = '0';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 0x80;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 'a';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
}*/
