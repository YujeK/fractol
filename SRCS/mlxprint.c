/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlxprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 03:34:14 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 20:55:09 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	greyprint(t_env *env)
{
	mlx_string_put(env->mlx, env->win, 1020, 280, \
			GREY, "~~ CONTROLS ~~");
	mlx_string_put(env->mlx, env->win, 1000, 310, \
			GREY, "MOVE     :  Arrows");
	mlx_string_put(env->mlx, env->win, 1000, 340, \
			GREY, "ITER +   :   '+'");
	mlx_string_put(env->mlx, env->win, 1000, 370, \
			GREY, "ITER -   :   '-'");
	//mlx_string_put(env->mlx, env->win, 1000, 400,
	//		GREY, ft_itoa(env->maxiter));
	mlx_string_put(env->mlx, env->win, 1000, 460, \
			GREY, "Pimp Frac : mouse");
	mlx_string_put(env->mlx, env->win, 1000, 430, \
			GREY, "Fractals :  1 to 9");
	mlx_string_put(env->mlx, env->win, 1000, 490, \
			GREY, "Reset    :  'SPACE'");
	mlx_string_put(env->mlx, env->win, 1000, 520, \
			GREY, "ZOOM   :   'scroll'");
	mlx_string_put(env->mlx, env->win, 0, 5, \
			GREY, "pRESS '0' tO WiTnEsS FrAcHicken");
	//mlx_string_put(env->mlx, env->win, 1000, 560,
	//		GREY, ft_itoa(env->cr * 100));
	//mlx_string_put(env->mlx, env->win, 1000, 590,
	//		GREY, ft_itoa(env->ci * 100));
}

void	rainbowprint(t_env *env)
{
	mlx_string_put(env->mlx, env->win, 1020, 280, \
			GREY, "~~ CONTROLS ~~");
	mlx_string_put(env->mlx, env->win, 1000, 310, \
			BROWN, "MOVE     :  Arrows");
	mlx_string_put(env->mlx, env->win, 1000, 340, \
			RED, "ITER +   :   '+'");
	mlx_string_put(env->mlx, env->win, 1000, 370, \
			ORANGE, "ITER -   :   '-'");
	//mlx_string_put(env->mlx, env->win, 1000, 400,
	//		YELLOW, ft_itoa(env->maxiter));
	mlx_string_put(env->mlx, env->win, 1000, 460, \
			CYAN, "Pimp Frac : mouse");
	mlx_string_put(env->mlx, env->win, 1000, 430, \
			GREEN, "Fractals :  1 to 9");
	mlx_string_put(env->mlx, env->win, 1000, 490, \
			BLUE, "Reset    :  'SPACE' ");
	mlx_string_put(env->mlx, env->win, 1000, 520, \
			PURPLE, "ZOOM   :   'scroll'");
	mlx_string_put(env->mlx, env->win, 0, 5, \
			WHITE, "'0' FOR BUCKET FRACTAL ~(__)=3");
	mlx_string_put(env->mlx, env->win, 20, 1180, \
			BLACK, "PRESS 'O' IF YOU CANNOT HANDLE");
	env->controlcolor = 1;
}

void	printmenu(t_env *env)
{
	if (env->display == 0)
	{
		if (env->ilikeit == 0)
			greyprint(env);
		else if (env->ilikeit == 1 || env->controlcolor == 1)
			rainbowprint(env);
	}
}

void	printnames(t_env *env)
{
	if (env->fra == 7)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Mandelbrot");
	if (env->fra == 1)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Julia");
	if (env->fra == 8)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Dragon");
	if (env->fra == 3)
		mlx_string_put(env->mlx, env->win, 1040, 10, PINK, "Tornadotwister69");
	if (env->fra == 2)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Ramhead");
	if (env->fra == 9)
		mlx_string_put(env->mlx, env->win, 1090, 10, PINK, "Chickenbrot");
	if (env->fra == 4)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Flower");
	if (env->fra == 5)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Batmandel");
	if (env->fra == 6)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Mandeland");
}
