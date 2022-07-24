/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:34:31 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/24 16:46:58 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		position;
	char	*str;

	str = (char *)s;
	i = 0;
	position = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			position = i;
		i++;
	}
	if (position > 0 || (unsigned char)str[0] == (unsigned char)c)
		return (&str[position]);
	if (!str[i] && !c)
		return (&str[i]);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    char s[] = "j'aime les pommes";
    
    c = 'e';
    printf("%s\n", ft_strrchr(s, c));
    printf("%s\n", strrchr(s, c));

    c = 'z';
    printf("%s\n", ft_strrchr(s, c));
    printf("%s\n", strrchr(s, c));

    c = 'j';
    printf("%s\n", ft_strrchr(s, c));
    printf("%s\n", strrchr(s, c));

    c = '\0';
    printf("%s\n", ft_strrchr(s, c));
    printf("%s\n", strrchr(s, c));
}*/