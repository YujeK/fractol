/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selectfractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 03:14:36 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 19:06:25 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	fractalselect(t_env *e)
{
	if ((ft_strcmp(e->name, "mandelbrot") == 0 && e->fra == 0) || e->fra == 7)
		mandelbro(e);
	if ((ft_strcmp(e->name, "julia") == 0 && e->fra == 0) || e->fra == 1)
		julia(e);
	if ((ft_strcmp(e->name, "dragon") == 0 && e->fra == 0) || e->fra == 8)
		dragon(e);
	if ((ft_strcmp(e->name, "disone") == 0 && e->fra == 0) || e->fra == 3)
		disone(e);
	if ((ft_strcmp(e->name, "ramhead") == 0 && e->fra == 0) || e->fra == 2)
		ramhead(e);
	if ((ft_strcmp(e->name, "chickenbrot") == 0 && e->fra == 0) || e->fra == 9)
		chickenbrot(e);
	if ((ft_strcmp(e->name, "flower") == 0 && e->fra == 0) || e->fra == 4)
		flower(e);
	if ((ft_strcmp(e->name, "batmandel") == 0 && e->fra == 0) || e->fra == 5)
		batmandel(e);
	if ((ft_strcmp(e->name, "mandeland") == 0 && e->fra == 0) || e->fra == 6)
		mandeland(e);
	commandcenter(e);
}

void	commandcenter(t_env *env)
{
	mlx_clear_window(env->mlx, env->win);
	if (env->wing == 0)
	{
		mlx_put_image_to_window(env->mlx, env->win, env->bucket, 0, 0);
		env->fdisplay = 1;
	}
	else if (env->fra == 10)
		mlx_put_image_to_window(env->mlx, env->win, env->rbckt, 0, 0);
	else
		mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	cursor(env);
	printmenu(env);
	printnames(env);
	mlx_hook(env->win, 6, 0, mouse_twerk, env);
	mlx_hook(env->win, 4, 0, mouse_manager, env);
	mlx_hook(env->win, 2, 0, key_manager, env);
	mlx_loop(env->mlx);
}
