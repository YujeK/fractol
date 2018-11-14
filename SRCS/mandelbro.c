/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 21:43:39 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/14 05:40:46 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	mandelbro(t_env *env)
{
	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		i;
	double		tmp;
	double		zoom_x;
	double		zoom_y;
	zoom_x = XDIM / 2 / (XMAXBROT - XMINBROT);
	zoom_y = YDIM / 2 / (YMAXBROT - YMINBROT);
	env->y = 0;
		while (env->y < YDIM)
		{
			env->x = 0;
			while (env->x < XDIM)
			{
			c_r = env->x / zoom_x + XMINBROT;
			c_i = env->y / zoom_y + YMINBROT;
			z_i = 0;
			z_r = 0;
			i = 0;
				while (z_r * z_r + z_i * z_i < 9999999 && i < env->maxiter)
				{
					tmp = z_r;
					z_r = z_r * z_r + z_i * z_i + c_r - 0.65;
					z_i = 2 * z_i * tmp + c_i - 1.;
					i++;
				}
				if (i == MAXITER)
				env->img_str[XDIM * env->y + env->x] = i * 9999999999 / env->maxiter;
				else
				env->img_str[XDIM * env->y + env->x] = i * 9999999999 / env->maxiter;
			env->x++;
			}
		env->y++;
		}
}
