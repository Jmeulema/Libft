/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:23:28 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:47:17 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result != 0 || !s1[i] || !s2[i])
			return (result);
		i++;
	}
	return (result);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "Bonjour";
//     char s2[] = "Bonjour";

//     printf("%d\n", ft_strncmp(s1, s2, 3));
//     printf("%d\n", strncmp(s1, s2, 3));

//     char s3[] = "bonjour";
//     char s4[] = "Bonjour";

//     printf("%d\n", ft_strncmp(s3, s4, 3));
//     printf("%d\n", strncmp(s3, s4, 3));

//     char s5[] = "Bonjour";
//     char s6[] = "Aonjour";

//     printf("%d\n", ft_strncmp(s5, s6, 3));
//     printf("%d\n", strncmp(s5, s6, 3));

//     char s7[] = "Bonjour";
//     char s8[] = "Adrjour";

//     printf("%d\n", ft_strncmp(s7, s8, 3));
//     printf("%d\n", strncmp(s7, s8, 3));

//     char s9[] = "Bonjour";
//     char s10[] = "Adrjour";

//     printf("%d\n", ft_strncmp(s9, s10, 0));
//     printf("%d\n", strncmp(s9, s10, 0));

//     char s11[] = "Bonjour";
//     char s12[] = "Adrjour";

//     printf("%d\n", ft_strncmp(s11, s12, 10));
//     printf("%d\n", strncmp(s11, s12, 10));

//     char s13[] = "bonjourb";
//     char s14[] = "bonjoura";

//     printf("%d\n", ft_strncmp(s13, s14, 7));
//     printf("%d\n", strncmp(s13, s14, 7));

//     char s15[] = "bonjourb";
//     char s16[] = "bonjoura";

//     printf("%d\n", ft_strncmp(s15, s16, 8));
//     printf("%d\n", strncmp(s15, s16, 8));
// }