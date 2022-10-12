/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:39:25 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/12 03:03:11 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void f(unsigned int c,char * c)
{
	char	a;

    a = 'a';
    c = c + a;
    return (c);
}
int main ()
{
}
*/
// allocated one strings
//&& replace word string to key function to pass in argument
// s[0] =