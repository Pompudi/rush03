/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:28:00 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/07 20:54:31 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_H
# define WRITE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	char			*key;
	char			*val;
	struct s_list	*next;
}					t_list;

char	*dish3(char *s, int len);
char	*dish2(char *s2, int len);
char	*dish1(char *s3, int len);
void	print(t_dict tab, char *str);
void	print2(t_dict bab, char *str);
void	putstr(char *str);
int		ft_strlen(char *str);
char nstr(char *s, int n);

#endif
