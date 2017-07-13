/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:51:21 by tle-meur          #+#    #+#             */
/*   Updated: 2017/01/21 15:55:25 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	ind;
	int	*tmp;

	if (min >= max)
		return (NULL);
	if ((tmp = (int *)malloc((max - min) * sizeof(int))) == NULL)
		return (NULL);
	ind = 0;
	while (min != max)
		tmp[ind++] = min++;
	return (tmp);
}
