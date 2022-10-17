/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:38 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/12 01:48:08 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	unsigned char *p;


	i = 0;
	p = (unsigned char *)s;

	if (p == 0)
		return (NULL);
	while (p[i] || p[i] == '\0')
	{
		if (p[i] == c)
		{
			return ((char *)p + i);
		}
		i++;
	}
	return ((char *)p);
}
//  int main () {
//     const char str[] = "GGSG.hhdhsh.dshh";
// 	char ch = '.';
// 	char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }