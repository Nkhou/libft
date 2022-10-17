/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/12 00:16:44 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (((i != n) && (p[i] != (unsigned char)c)) && p[i] != '\0')
		i++;
	return (p + i);
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