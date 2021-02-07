/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:52:01 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/07 20:54:45 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "write.h"

void write_letter(char *digit, t_list *dict)
{
	char *disharge;
	int len;
	int r;

	len = ft_strlen(digit);
	count_null = len % 3;
	if (len > 2)
	{
		disharge = dis3(digit, len - count_null);
		if (count_null == 1)
		{
			write_letter(nstr(digit, 1);
			print(dict, disharge);
		}
		else
		{
			write_letter(nstr(digit, count_null), dict);
			print(dict, disharge);
		}
		disharge = withoutn(digit, count_null);
		if (disharge)
			write_letter(disharge, dict);
	}
	else if (len = 2)
	{
		disharge = dish2(digit);
		print(dict, disharge);
		digit++;
		print(dict, digit);
	}
	else
		print(dict, digit);
}
