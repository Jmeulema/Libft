/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:33:49 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/16 16:19:30 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int index, char *s)
{
	ft_putchar_fd(*s, 1);
	ft_putchar_fd('[', 1);
	ft_putnbr_fd(index, 1);
	ft_putchar_fd(']', 1);
}

int	main(void)
{
	char	str1[] = "abc";

	ft_striteri(str1, *f);
}*/