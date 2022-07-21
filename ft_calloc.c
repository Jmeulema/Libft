/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:29:32 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/21 16:26:14 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(sizeof(void ) * count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
	printf("%s\n", ft_calloc(2, 3));
	printf("%s\n", calloc(2, 3));
}*/
