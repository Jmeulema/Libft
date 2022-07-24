/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:24:07 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:46:21 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (!s[i] && !c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int c;

//     c = 'z';
//     ft_strchr((void *)0, c);
	// int c;
	// char s[] = "0j'aime les pommes";

	// c = 'e';
//     printf("%s\n", ft_strchr(s, c));
//     printf("%s\n", strchr(s, c));

//     c = 'z';
//     printf("%s\n", ft_strchr(s, c));
//     printf("%s\n", strchr(s, c));

//      c = '0';
//     printf("%s\n", ft_strchr(s, c));
//     printf("%s\n", strchr(s, c));

//     c = '\0';
//     printf("%s\n", ft_strchr(s, c));
//     printf("%s\n", strchr(s, c));

// 	char s1[] = "";

//     c = '\0';
//     printf("%s\n", ft_strchr(s1, c));
//     printf("%s\n", strchr(s1, c));
// }