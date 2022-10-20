/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:01 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 14:07:15 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *my_s1;
	unsigned char *my_s2;
	
	i = 0;
	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	
	while (i < n && (my_s1[i] != '\0' || my_s2[i] != '\0'))
	{
		if (my_s1[i] != my_s2[i])
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}

/*int main () {
   char str1[15] = "ABC\0\0\0\0";
   char str2[15] = "ABCDEF";
   int ret;

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
	  printf("str1 is less than str2");
   } else if(ret > 0) {
	  printf("str2 is less than str1");
   } else {
	  printf("str1 is equal to str2");
   }
   
   return(0);
}
*/