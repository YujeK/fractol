/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:05:22 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/17 03:55:53 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	julia(t_env *env)
{
	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		i;
	double		tmp;
	double		z_rs;
	double		z_is;

	env->y = 0;
		while (env->y < YDIM)
		{
			env->x = 0;
			while (env->x < XDIM)
			{
			z_r = env->xminjulia + env->x * env->step;
			z_i = env->yminjulia + env->y * env->step;
			z_rs = z_r * z_r;
			z_is = z_i * z_i;
			c_i = (0.01 + env->ci);
			c_r = (0.285 + env->cr);
			i = 0;
				while (z_rs + z_is < 4  && i < env->maxiter)
				{
					tmp = z_r;
					z_r = z_rs - z_is + c_r;
					z_i = 2 * z_i * tmp + c_i;
					i++;
					z_rs = z_r * z_r;
					z_is = z_i * z_i;
				}
				if (env->ilikeit == 1)
				{
					env->img_str[XDIM * env->y + env->x] = i * 9999999999 / env->maxiter;
				}
				else
					env->img_str[XDIM * env->y + env->x] = i * 211 / env->maxiter;
			env->x++;
			}
		env->y++;
		}
}
