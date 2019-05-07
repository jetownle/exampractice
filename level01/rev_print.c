/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:55:27 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/06 20:16:39 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;

	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			i++;
		}
		while( i > 0 )
		{
			write(1, &argv[1][--i], 1);
		}
	}
	write(1, "\n", 1);
}
