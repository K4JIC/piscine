/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:37:23 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/28 22:44:10 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.h"

void	set_funcs(int (**f)(int, int))
{
	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
}

void	set_operand(int operand[128])
{
	operand['+'] = 0;
	operand['-'] = 1;
	operand['*'] = 2;
	operand['/'] = 3;
	operand['%'] = 4;
}

int	calculate(int a, int b, int op, int (**f)(int, int))
{
	return (f[op](a, b));
}

int	main(int argc, char **argv)
{
	int	(*calcs[5])(int, int);
	int	operand[128];
	int	a;
	int	b;
	int	op;

	(void)argc;
	set_funcs(calcs);
	set_operand(operand);
	a = ft_atoi(argv[1]);
	op = operand[(int)argv[2][0]];
	b = ft_atoi(argv[3]);
	if (ft_atoi(argv[3]) == 0 && (argv[2][0] == '/'))
	{
		write(1, "Stop : division by zero", 23);
		return (1);
	}
	if (ft_atoi(argv[3]) == 0 && (argv[2][0] == '%'))
	{
		write(1, "Stop : modulo by zero", 21);
		return (1);
	}
	ft_putnbr(calculate(a, b, op, calcs));
	write(1, "\n", 1);
	return (0);
}
