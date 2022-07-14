/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeulema <jmeulema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:48:41 by jmeulema          #+#    #+#             */
/*   Updated: 2022/07/12 17:10:15 by jmeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('a', -1);
	ft_putchar_fd('\n',1);

	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n',1);
}*/
