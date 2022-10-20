/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:30:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 15:14:50 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char f(unsigned int i, char c)
// {
// 	return c = c + i;
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

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
// int main()
// {
// 	char *str = "hello";
// 	printf("%s", ft_strmapi(str, f));
// 	return (0);
// }