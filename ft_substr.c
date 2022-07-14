/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:31 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 15:19:06 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) > len)
		i = len;
	else
		i = ft_strlen(s);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (start > (unsigned int)ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while ((len - i) > 0 && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int main()
{
	const char 	s1 [] = "je suis jerome";

	printf("%s\n", ft_substr(s1, 3, 7));

	const char 	s2 [] = "je suis jerome";

	printf("%s\n", ft_substr(s2, 3, 12));

	const char 	s3 [] = "";

	printf("%s\n", ft_substr(s3, 3, 7));

	const char 	s4 [] = "je suis jerome";

	printf("%s\n", ft_substr(s4, 8, 3));

	const char 	s5 [] = "je suis jerome";

	printf("%s\n", ft_substr(s5, 0, 2));
}*/