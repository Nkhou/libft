/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:11 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 18:36:37 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = ft_strlen((char *)s);
	p = (char *)s;
	while (i >= 0)
	{
		if (p[i] == (char)c)
		{
			return (p + i);
		}
		i--;
	}
	return (NULL);
}
// int main () {
//    const char str[] = "GGSG.hhdhsh.dshh";
//    char ch = '.';
//    char *ret;
//    ret = ft_strchr(str, ch);
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }