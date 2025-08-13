/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:05:01 by tozaki            #+#    #+#             */
/*   Updated: 2025/08/09 18:38:02 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str[]);
void	rush(int x, int y);

void	input_type_eroor(void)
{
	ft_putchar("rush needs nutural number inputs!!");
}

void	wrong_number_of_augments_error(void)
{
	ft_putchar("rush needs just 2 argments x and y !!");
}

int	a_to_i(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		if (*str - '0' < 0 || *str - '0' > 9)
			input_type_eroor();
		else
			num += *str - '0';
			num *= 10;
			str ++;
	}
	num /= 10;
	return num;
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = a_to_i(argv[1]);
	y = a_to_i(argv[2]);
	if (argc != 3)
		wrong_number_of_augments_error();
	else
		rush(x, y);
	return 0;
}