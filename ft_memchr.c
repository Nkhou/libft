/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:49:52 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;

	ch = (unsigned char)c;
	p = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*p == ch)
			return (p);
			p++;
	}
	return (NULL);
}

//	int main () {
//    //const char str[] = "hello.salut.hgdf";
//    const int str[] = {1,2,3,4};
//    int ch = 3;
//    int *ret;
//    int i;
//    i = 0;
//    ret = ft_memchr(str, ch, 4);
//    while (i < 3)
//    {
// 	printf("%d", ret[i++]);
//    }
//    //printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }