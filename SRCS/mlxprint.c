/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlxprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 03:34:14 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/19 17:33:48 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void        printmenu(t_env *env)
{
	if (env->display == 0)
	{
		mlx_string_put(env->mlx, env->win, 1020, 280, GREY, "~~ CONTROLS ~~");
		mlx_string_put(env->mlx, env->win, 1000, 310, GREY, "MOVE     :  Arrows");
		mlx_string_put(env->mlx, env->win, 1000, 340, GREY, "ITER +   :   '+'");
		mlx_string_put(env->mlx, env->win, 1000, 370, GREY, "ITER -   :   '-'");
		mlx_string_put(env->mlx, env->win, 1000, 400, GREY, "Reset    :  'SPACE' ");
		mlx_string_put(env->mlx, env->win, 1000, 430, GREY, "Fractals :  1 to 9");
		mlx_string_put(env->mlx, env->win, 1000, 460, GREY, "Color +  :   '+'  ");
		mlx_string_put(env->mlx, env->win, 1000, 490, GREY, "Color -  :   '-'  ");
		mlx_string_put(env->mlx, env->win, 1000, 520, GREY, "ZOOM   :   'scroll'");
		mlx_string_put(env->mlx, env->win, 0, 5, WHITE, "pRESS '0' tO WiTnEsS FrAcHicken");
		if (env->ilikeit == 1 || env->controlcolor == 1)
		{
		mlx_string_put(env->mlx, env->win, 1020, 280, GREY, "~~ CONTROLS ~~");
		mlx_string_put(env->mlx, env->win, 1000, 310, BROWN, "MOVE     :  Arrows");
		mlx_string_put(env->mlx, env->win, 1000, 340, RED, "ITER +   :   '+'");
		mlx_string_put(env->mlx, env->win, 1000, 370, ORANGE, "ITER -   :   '-'");
		mlx_string_put(env->mlx, env->win, 1000, 400, YELLOW, "Reset    :  'SPACE' ");
		mlx_string_put(env->mlx, env->win, 1000, 430, GREEN, "Fractals :  1 to 9");
		mlx_string_put(env->mlx, env->win, 1000, 460, CYAN, "Color +  :   '+'  ");
		mlx_string_put(env->mlx, env->win, 1000, 490, BLUE, "Color -  :   '-'  ");
		mlx_string_put(env->mlx, env->win, 1000, 520, PURPLE, "ZOOM   :   'scroll'");
		mlx_string_put(env->mlx, env->win, 0, 5, WHITE, "pRESS '0' tO WiTnEsS FrAcHicken");
		mlx_string_put(env->mlx, env->win, 20, 1180, GREY, "you can still press 'O' if you can't handle it");
		mlx_string_put(env->mlx, env->win, 0, 1175, CYAN, "**");
		env->controlcolor = 1;
		}
	}
}

void		printnames(t_env *env)
{
	if (env->fracton == 7)
		mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Mandelbrot");
	if (env->fracton == 1)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Julia");
	if (env->fracton == 8)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Dragon");
	if (env->fracton == 3)
				mlx_string_put(env->mlx, env->win, 1040, 10, PINK, "Tornadotwister69");
	if (env->fracton == 2)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Ramhead");
	if (env->fracton == 9)
				mlx_string_put(env->mlx, env->win, 1090, 10, PINK, "Chickenbrot");
	if (env->fracton == 4)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Flower");
	if (env->fracton == 5)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Batmandel");
	if (env->fracton == 6)
				mlx_string_put(env->mlx, env->win, 1100, 10, PINK, "Mandeland");
}
