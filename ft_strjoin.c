/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:20:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 19:26:20 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		mys2;
	char	*p;
	size_t		i;
	size_t		d;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	mys2 = ft_strlen(s2);
	d = ft_strlen(s1) + mys2 + 1;
	p = ft_calloc(1, d);
	if (!p)
		return (NULL);
	while (i < d)
	{
		if (i < ft_strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[j++];
		i++;
	}
	return (p);
}
// int main()
// {
// 	printf("%s",ft_strjoin("hello","world"));
// 	return (0);
// }