/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:14:14 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/23 00:05:01 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	cmp;

	i = start;
	if (!s)
		return (NULL);
	cmp = ft_strlen(s + start) + 1;
	if (ft_strlen(s + start) < len)
		str = (char *)malloc(sizeof(char) * cmp);
	else
		str = (char *)malloc(sizeof(char) * len + 1);
	if (start >= ft_strlen((char *)s))
		return (str);
	if (!str)
		return (NULL);
	cmp = 0;
	while (cmp < len && s[i])
		str[cmp++] = (char)s[i++];
	str[cmp] = '\0';
	return (str);
}
// int main()
// {
// 	char const *str="i just want this part #############";
// 	printf("%s",ft_substr(str, 5, 10));
// 	return (0);
// }