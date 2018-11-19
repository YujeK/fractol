/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selectfractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 03:14:36 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/19 18:01:09 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void fractalselect(t_env *env)
{
	if (env->fracton == 0)
	{
		if (ft_strcmp(env->name, "mandelbrot") == 0)
			mandelbro(env);
		if (ft_strcmp(env->name, "julia") == 0)
			julia(env);
		if (ft_strcmp(env->name, "dragon") == 0)
			dragon(env);
		if (ft_strcmp(env->name, "disone") == 0)
			disone(env);
		if (ft_strcmp(env->name, "ramhead") == 0)
			ramhead(env);
		if (ft_strcmp(env->name, "chickenbrot") == 0)
			chickenbrot(env);
		if (ft_strcmp(env->name, "flower") == 0)
			flower(env);
		if (ft_strcmp(env->name, "batmandel") == 0)
			batmandel(env);
		if (ft_strcmp(env->name, "mandeland") == 0)
			mandeland(env);
	}
}

void commandcenter(t_env *env)
{
	mlx_clear_window(env->mlx, env->win);
	if (env->wing == 0)
	{
		mlx_put_image_to_window(env->mlx, env->win, env->bucket, 0, 0);
		env->fdisplay = 1;
	}
	else if (env->fracton == 10)
		mlx_put_image_to_window(env->mlx, env->win, env->rbckt, 0, 0);
	else
		mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	printmenu(env);
	cursor(env);
	printnames(env);
	mlx_hook(env->win, 6, 0, mouse_twerk, env);
	mlx_hook(env->win, 4, 0, mouse_manager, env);
	mlx_hook(env->win, 2, 0, key_manager, env);
	mlx_loop(env->mlx);
}
