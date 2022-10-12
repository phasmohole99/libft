/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:17:15 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:17 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// stored anykey in list char according to lenght you are command
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*me;
	size_t			i;

	i = 0;
	me = (unsigned char *)b;
	while (i < len)
	{
		me[i++] = c;
	}
	return (b);
}
/*int main ()
{
    char c[] = "mohamed";
    printf("%s",ft_memset(c,'.',5));
    return (0);
}*/
