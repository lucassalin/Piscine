/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:59:47 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 14:36:48 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	
	int y;
	int x;

	y = 1;
	
	while (y < argc)
	{
		x = 0;
		while (argv[y][x])
		{
			ft_putchar(argv[y][x]);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
	return (0);
}
