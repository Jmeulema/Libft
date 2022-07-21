/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:30 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/20 15:05:02 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[100];
    char src [] = "bonjour";
    printf("%zu\n", ft_strlcpy(dest, src, 4));
    printf("%s\n", dest);
    char dest1[100];
    char src1 [] = "bonjour";
    printf("%zu\n", strlcpy(dest1, src1, 4));
    printf("%s\n", dest1);
    char dest2[] = "salut";
    char src2 [] = "bonjour";
    printf("%zu\n", ft_strlcpy(dest2, src2, 0));
    printf("%s\n", dest2);
    char dest3[] = "salut";
    char src3 [] = "bonjour";
    printf("%zu\n", strlcpy(dest3, src3, 0));
    printf("%s\n", dest3);
    char dest4[] = "salut";
    char src4 [] = "bonjour";
    printf("%zu\n", ft_strlcpy(dest4, src4, 6));
    printf("%s\n", dest4);
    char dest5[] = "salut";
    char src5 [] = "bonjour";
    printf("%zu\n", strlcpy(dest5, src5, 6));
    printf("%s\n", dest5);
}*/

/* Ne pourra marcher que si la size est plus petite 
ou egal a la taille de la destination (avec le '\0')*/