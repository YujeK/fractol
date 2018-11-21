/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:05:22 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 12:12:12 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	fracinit(t_env *env)
{
	env->i = 0.0;
	while (env->z_rs + env->z_is < 4 && env->i < env->maxiter)
	{
		env->tmp = env->z_r;
		env->z_r = env->z_rs - env->z_is + env->c_r;
		env->z_i = 2 * env->z_i * env->tmp + env->c_i;
		env->i++;
		env->z_rs = env->z_r * env->z_r;
		env->z_is = env->z_i * env->z_i;
	}
}

void	julia(t_env *e)
{
	e->y = 0;
	while (e->y < YDIM)
	{
		e->x = 0;
		while (e->x < XDIM)
		{
			e->z_r = e->xminjulia + e->x * e->step;
			e->z_i = e->yminjulia + e->y * e->step;
			e->z_rs = e->z_r * e->z_r;
			e->z_is = e->z_i * e->z_i;
			e->c_i = e->ci;
			e->c_r = e->cr;
			fracinit(e);
			if (e->ilikeit == 1)
				e->img_str[XDIM * e->y + e->x] = e->i * RB / e->maxiter;
			else
				e->img_str[XDIM * e->y + e->x] = e->i * 211 / e->maxiter;
			e->x++;
		}
		e->y++;
	}
}
