/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:31:35 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 13:00:54 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = '0';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = 'a';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}*/
