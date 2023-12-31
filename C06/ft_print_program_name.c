/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:26:39 by lsalin            #+#    #+#             */
/*   Updated: 2023/01/19 14:36:43 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	x;

	(void)argv;
	x = 0;
	while (argv[0][x])
	{
		ft_putchar(argv[0][x]);
		x++;
	}
	return (0);
}
