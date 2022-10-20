/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:38:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 12:51:40 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*ca;

	ca = malloc (count * size);
	if (ca == NULL)
		return (NULL);
	ft_bzero(ca, count * size);
	return (ca);
}
// int	main(void){
// 	int i, * ptr, sum = 0;
//         ptr = ft_calloc(10, sizeof(int));
//         if (ptr == NULL) {
//             printf("Error! memory not allocated.");
//             exit(0);
//         }
//         printf("Building and calculating the sequence sum of the first 10 terms /n ");
//         for (i = 0; i < 10; ++i) { * (ptr + i) = i;
//             sum += * (ptr + i);
//         }
//         printf("Sum = %d", sum);
//         free(ptr);
//         return 0;
//     }