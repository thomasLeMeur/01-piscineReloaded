/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:35:43 by tle-meur          #+#    #+#             */
/*   Updated: 2017/01/21 17:51:10 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	c;

	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else if ((fd = open(av[1], O_RDWR)) == -1)
		write(2, "Can't open the file.\n", 21);
	else
	{
		while (read(fd, &c, 1) > 0)
			write(1, &c, 1);
		close(fd);
	}
	return (0);
}
