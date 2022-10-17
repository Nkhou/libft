/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:50:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/12 22:04:19 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	unsigned int	i;
	char	*str;
	unsigned int	cmp;

	i = start;
	cmp = 0;
	str = (char *) malloc(len);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[cmp++] = (char)s[i++];
	}
	return (str);
}
 int main()
 {
 	char *str = "jgfdjuduu";
 	printf("%s \n", ft_substr(str,2,3));
 	return (0);
 }
	