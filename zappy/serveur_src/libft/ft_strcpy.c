/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguesner <mguesner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:45:39 by mguesner          #+#    #+#             */
/*   Updated: 2013/12/01 10:25:49 by mguesner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	s1 = (char *)ft_memcpy(s1, s2, ft_strlen(s2));
	s1[ft_strlen(s2)] = 0;
	return (s1);
}
