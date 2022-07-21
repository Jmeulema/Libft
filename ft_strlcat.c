/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:04 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/20 16:35:14 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	s = (char *)src;
	if (size < destlen)
		return (size + srclen);
	while (destlen + i < size && s[i] != '\0')
	{
		dest[destlen + i] = s[i];
		i++;
	}
	if (size > destlen && size == destlen + i)
		dest[destlen + i - 1] = '\0';
	else
		dest [destlen + i] = '\0';
	return (destlen + srclen);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest6 [15] = "lol";
	char src6 [15] = "lil";
	printf("%zu\n", strlcat(dest6, src6, 2));
	printf("%s\n", dest6);
	char dest7 [15] = "lol";
	char src7 [15] = "lil";
	printf("%zu\n", strlcat(dest7, src7, 2));
	printf("%s\n", dest7);
	char dest8 [15] = "lol";
	char src8 [15] = "lil";
	printf("%zu\n", strlcat(dest8, src8, 0));
	printf("%s\n", dest8);
	char dest9 [15] = "lol";
	char src9 [15] = "lil";
	printf("%zu\n", strlcat(dest9, src9, 0));
	printf("%s\n", dest9);
    char dest [15] = "salut";
    char src [15] = "bonjour";
    printf("%zu\n", ft_strlcat(dest, src, 9));
    printf("%s\n", dest);
	printf("%s\n", src);
    char dest1 [100] = "salut";
    char src1 [] = "bonjour";
    printf("%zu\n", strlcat(dest1, src1, 9));
    printf("%s\n", dest1);
	printf("%s\n", src1);
    char dest2 [] = "salut";
    char src2 [] = "bonjour";
    printf("%zu\n", ft_strlcat(dest2, src2, 4));
    printf("%s\n", dest2);
    char dest3 [] = "salut";
    char src3 [] = "bonjour";
    printf("%zu\n", strlcat(dest3, src3, 4));
    printf("%s\n", dest3);
    char dest4 [] = "1337 42";
    char src4 [] = "born to code";
    printf("%zu\n", ft_strlcat(dest4, src4, 14));
    printf("%s\n", dest4);
	char dest5 [100] = "1337 42";
    char src5 [] = "born to code";
    printf("%zu\n", strlcat(dest5, src5, 14));
	printf("%s\n", dest5);
}*/