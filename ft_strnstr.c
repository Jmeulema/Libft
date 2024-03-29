/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:17 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:48:08 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	size;

	if (!*to_find)
		return ((char *)str);
	size = ft_strlen(to_find);
	while (*str && len >= size)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, size) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main (void) 
{
	const	char	haystack[20] = "TutorialsPoint";
	const	char	needle[10] = "tu";
	char			*result;

	result = ft_strnstr(haystack, needle, 3);
	printf("The substring is: %s\n", result);
	result = strnstr(haystack, needle, 3);
	printf("The substring is: %s\n", result);

	const char haystack1[20] = "tutorialsPoint";
	const char needle1[10] = "tu";
	char *result1;

	result1 = ft_strnstr(haystack1, needle1, 3);
	printf("The substring is: %s\n", result1);
	result1 = strnstr(haystack1, needle1, 3);
	printf("The substring is: %s\n", result1);

	const char haystack2[20] = "TutorialsPoint";
	const char needle2[10] = "to";
	char *result2;

	result2 = ft_strnstr(haystack2, needle2, 6);
	printf("The substring is: %s\n", result2);
	result2 = strnstr(haystack2, needle2, 4);
	printf("The substring is: %s\n", result2);

	const char haystack3[20] = "TutorialsPoint";
	const char needle3[10] = "To";
	char *result3;

	result3 = ft_strnstr(haystack3, needle3, 6);
	printf("The substring is: %s\n", result3);
	result3 = strnstr(haystack3, needle3, 4);
	printf("The substring is: %s\n", result3);

	const char haystack4[20] = "TutorialsPoint";
	const char needle4[10] = "rial";
	char *result4;

	result4 = ft_strnstr(haystack4, needle4, 7);
	printf("The substring is: %s\n", result4);
	result4 = strnstr(haystack4, needle4, 7);
	printf("The substring is: %s\n", result4);

	const	char	haystack5[20] = "TutorialsPoint";
	const	char	needle5[] = "";
	char			*result5;

	result5 = ft_strnstr(haystack5, needle5, 3);
	printf("The substring is: %s\n", result5);
	result5 = strnstr(haystack5, needle5, 3);
	printf("The substring is: %s\n", result5);
}*/