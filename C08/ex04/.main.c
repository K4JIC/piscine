/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:54:04 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/26 17:10:35 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int main (int argc, char **argv)
{
	t_stock_str *tab;
	
	tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	return (0);
}