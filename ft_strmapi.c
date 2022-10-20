/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:30:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 10:29:08 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char f(unsigned int i, char c)
{
	return c = c + i;
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	i = 0;
	str = (char *) malloc(sizeof(char *) *ft_strlen(s));
	if (!s || !f)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
// int main()
// {
// 	char *str = "hello";
// 	printf("%s", ft_strmapi(str, f));
// 	return (0);
// }