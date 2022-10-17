/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:11 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 22:19:30 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*p;

	i = ft_strlen((char *)s);
	p = (char *)s;
	while (p[i] != c )
	{
		i--;
	}
	return (&p[i]);
}
// int main () {
//    const char str[] = "GGSG.hhdhsh.dshh";
//    char ch = '.';
//    char *ret;
//    ret = ft_strchr(str, ch);
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }