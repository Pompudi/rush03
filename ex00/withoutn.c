/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   withoutn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:30:18 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/07 20:47:32 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "write.h"

char	*withoutn(char *str, int n)
{
	char	*s;
	int		flag;
	int		i;
	int		j;

	j = 0;
	i = n;
	if (n == 0)
		i = 1;
	flag = 0;
	s = malloc(ft_strlen(str));
	while (str[i] == '0')
		i++;
	while (str[i] != '\0')
	{
		s[j] = str[i];
		i++;
		j++;
		flag = 1;
	}
	s[j] = '\0';
	if (flag)
		return (s);
	else
		return (NULL);
}
