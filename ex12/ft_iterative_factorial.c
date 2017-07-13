/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:07:42 by tle-meur          #+#    #+#             */
/*   Updated: 2017/01/21 15:14:26 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int sum;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	sum = nb--;
	while (nb > 0)
		sum *= nb--;
	return (sum);
}
