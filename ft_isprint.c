/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:31:51 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/14 17:21:00 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = '-';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 0x80;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
}*/
