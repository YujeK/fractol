/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   badarg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 08:36:15 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 19:03:53 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	badarg(char **av)
{
	if (ft_strcmp(*av, "julia") != 0 && ft_strcmp(*av, "mandelbrot") != 0 &&
		ft_strcmp(*av, "disone") != 0 && ft_strcmp(*av, "batmandel") != 0 &&
		ft_strcmp(*av, "dragon") != 0 && ft_strcmp(*av, "chickenbrot") != 0 &&
		ft_strcmp(*av, "ramhead") != 0 && ft_strcmp(*av, "flower") != 0 &&
		ft_strcmp(*av, "mandeland") != 0)
	{
		ft_putstr("Bad arg you should try: dragon|disone|julia|mandelbrot|\n");
		ft_putstr("|chickenbrot|flower|ramhead|mandeland|batmandel|\n");
		exit(0);
	}
}
