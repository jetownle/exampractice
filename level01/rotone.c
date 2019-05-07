/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 12:59:57 by jetownle          #+#    #+#             */
/*   Updated: 2019/01/29 13:04:29 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main( int argc, char **argv )
{
	int i;
	char letter;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				letter++;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				letter++;
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				letter = letter - 25;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
