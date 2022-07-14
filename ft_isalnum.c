/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:29:32 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 12:57:50 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = '\n';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = 'B';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = '0';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = ' ';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}*/
