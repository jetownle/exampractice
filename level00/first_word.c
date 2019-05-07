/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:01:30 by jetownle          #+#    #+#             */
/*   Updated: 2019/01/28 14:21:23 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace( int i )
{
	if ( i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ' )
		return 1;
	return 0;
}

int main( int argc, char **argv )
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(ft_isspace(argv[1][i]))
		{
			i++;
		}
		while(!ft_isspace(argv[1][i]) && argv[1][i] != '\0')
		{
			write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
