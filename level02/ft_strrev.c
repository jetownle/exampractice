/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:56:46 by jetownle          #+#    #+#             */
/*   Updated: 2019/01/29 15:13:53 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while(str[len])
		len++;
	i = -1;
	while(++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	str[i] = '\0';
	return (str);
}
