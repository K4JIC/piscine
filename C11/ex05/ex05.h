/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:47:37 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 20:35:53 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_H
# define EX05_H
# include <unistd.h>

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

void	ft_putnbr(int nbr);
int		ft_atoi(char *str);

#endif