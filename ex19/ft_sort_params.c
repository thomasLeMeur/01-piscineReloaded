/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:39:22 by tle-meur          #+#    #+#             */
/*   Updated: 2017/01/21 18:25:52 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int size, char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < size - 1)
	{
		j = i - 1;
		while (++j < size)
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	ft_sort(ac, av);
	while (++i < ac)
	{
		while (*av[i])
			ft_putchar(*((av[i])++));
		ft_putchar('\n');
	}
}
