/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:46:39 by tle-meur          #+#    #+#             */
/*   Updated: 2017/01/21 15:50:39 by tle-meur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*tmp;

	if (!src)
		return (NULL);
	len = 0;
	tmp = src;
	while (*(tmp++))
		len++;
	if ((tmp = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	tmp[len] = '\0';
	while (--len >= 0)
		tmp[len] = src[len];
	return (tmp);
}
