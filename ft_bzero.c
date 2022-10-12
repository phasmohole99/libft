/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:08:38 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:06 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// not return anythink
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int main ()
{
    char c[] = "holephasmo";
    ft_bzero(c,4);
    int i=0;
    for(i=0;i<sizeof(c)/sizeof(char);i++)
    {
        printf("%c \t",c[i]);
    }
    return (0);
}*/
