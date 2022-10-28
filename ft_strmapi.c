/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:30:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/27 23:37:59 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char f(unsigned int i, char c)
{
	c = ft_toupper(c) + i;
	return (c);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *) malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!s || !f)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
int main()
{
	char const str[] = "hello";
	char *p = ft_strmapi(str, f);
	printf("%s", p);
}