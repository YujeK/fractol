/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flower.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:15:31 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 09:39:28 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	fracinite(t_env *env)
{
	double r2;
	double i2;

	env->i = 0.0;
	r2 = env->z_r * env->z_r;
	i2 = env->z_i * env->z_i;
	while (r2 - i2 < 4 && env->i < env->maxiter)
	{
		env->tmp = env->z_r;
		env->z_r = r2 - i2 + env->c_r;
		env->z_i = 2 * env->z_i * env->tmp + env->c_i;
		env->i++;
		r2 = env->z_r * env->z_r;
		i2 = env->z_i * env->z_i;
	}
}

void	flower(t_env *e)
{
	e->y = 0;
	while (e->y < YDIM)
	{
		e->x = 0;
		while (e->x < XDIM)
		{
			e->z_r = e->xminjulia + e->x * e->step;
			e->z_i = e->yminjulia + e->y * e->step;
			e->c_i = e->ci;
			e->c_r = e->cr;
			e->i = 0;
			fracinite(e);
			if (e->ilikeit == 1)
				e->img_str[XDIM * e->y + e->x] = e->i * 999999999 / e->maxiter;
			else
				e->img_str[XDIM * e->y + e->x] = e->i * 211 / e->maxiter;
			e->x++;
		}
		e->y++;
	}
}
