/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:30 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 13:15:33 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	const char	s[50] = "je suis jerome";

	printf("%s\n", ft_strdup(s));

	const char	s1[50] = "je suis jerome";

	printf("%s\n", strdup(s1));

	const char	s2[] = "";

	printf("%s\n", ft_strdup(s2));

	const char	s3[] = "";

	printf("%s\n", strdup(s3));
}*/