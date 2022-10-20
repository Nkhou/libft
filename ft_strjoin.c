/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:20:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 20:30:13 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	mys1;
	int	mys2;
	char	*p;
	int	i;
	int	d;
	int j;

	i = 0;
	j = 0;
	mys1 = ft_strlen(s1) - 1;
	mys2 = ft_strlen(s2) + 1;
	d = mys1 + mys2;
	p = malloc(d);
	if(!p)
		return (NULL);
	while (i < d)
	{
		if (i <= mys1)
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