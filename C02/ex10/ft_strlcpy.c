/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:44:53 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/13 18:44:37 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < size)
	{
		*dest = '\0';
		dest++;
		i++;
	}
}
