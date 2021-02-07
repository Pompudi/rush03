/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:27:49 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/07 20:34:02 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *dis3(char *s, int len)
{
	char *dish;
	int i;

	i = 0;
	dish = malloc(sizeof(char) * len + 1);
	while (i <= len)
	{
		if (i != 0)
			dish[i] = '0';
		else
			dish[i] = '1';
		i++;
	}
	dish[i] = '\0';
	return (dish);
}
char *dish2(char *digit)
{
	char *s;

	s = malloc(2);
	s[0] = digit[0];
	s[1] = '0';
	return (s)
}
void print(t_list *dict,char *str)
{
	while (ft_strcmp(dict[i].key, str != 0))
		i++
	ft_putstr(dict[i].val);
}
