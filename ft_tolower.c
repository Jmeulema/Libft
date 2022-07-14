/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:39 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 13:26:57 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'A';
	printf("%d\n", ft_tolower(c));
	printf("%c\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	printf("%c\n", tolower(c));
}*/

/*%d ===> entier table ascii
	%c ===> charactere table ascii*/
