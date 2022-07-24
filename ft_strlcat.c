/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:04 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:47:42 by jmeulema         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char d[50] = "lol";
// 	ft_strlcat(d, (void *)0, 2);

	// char dest6 [15] = "lol";
	// char src6 [15] = "lil";
	// printf("%zu\n", strlcat(dest6, src6, 2));
	// printf("%s\n", dest6);
	// char dest7 [15] = "lol";
	// char src7 [15] = "lil";
	// printf("%zu\n", strlcat(dest7, src7, 2));
	// printf("%s\n", dest7);
	// char dest8 [15] = "lol";
	// char src8 [15] = "lil";
	// printf("%zu\n", strlcat(dest8, src8, 0));
	// printf("%s\n", dest8);
	// char dest9 [15] = "lol";
	// char src9 [15] = "lil";
	// printf("%zu\n", strlcat(dest9, src9, 0));
	// printf("%s\n", dest9);
// }