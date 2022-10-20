/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:38 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 12:50:46 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	char *p;

	i = 0;
	p = (char *)s;

	while (p[i])
	{
		if (p[i] == c)
		{
			return (p + i);
		}
		i++;
	}
	if (p[i] == '\0' && c == '\0')
		return (&p[i]);
	return (NULL);
}
//  int main () {
//     const char str[] = "GGSG.hhdhsh.dshh";
// 	char ch = '.';
// 	char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }