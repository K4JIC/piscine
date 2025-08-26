/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:00:17 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/25 07:29:09 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	*former;
	int	*latter;

	count = 0;
	while (count < size / 2)
	{
		former = tab + count;
		latter = tab + size - count -1;
		ft_swap(former, latter);
		count++;
	}
}
