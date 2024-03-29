/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:49 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/22 14:40:04 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_int(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) -1;
	while (ft_check_int(s1[i], set) == 1)
		i++;
	if (i - 1 == j)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	while (ft_check_int(s1[j], set) == 1)
		j--;
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}

/*#include <stdio.h>

int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	printf("%s\n", ft_strtrim("aqrdac", "abc"));
	printf("%s\n", ft_strtrim("aqraadabc", "abc"));
}*/