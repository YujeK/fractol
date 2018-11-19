/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flower.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:15:31 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/19 13:16:33 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	flower(t_env *env)
{
	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		i;
	double		tmp;

	env->y = 0;
		while (env->y < YDIM)
		{
			env->x = 0;
			while (env->x < XDIM)
			{
			z_r = env->xminjulia + env->x * env->step;
			z_i = env->yminjulia + env->y * env->step;
			c_i = (0.01 + env->ci);
			c_r = (0.285 + env->cr);
			i = 0;
				while (z_r * z_r - z_i * z_i < 4  && i < env->maxiter)
				{
					tmp = z_r;
					z_r = z_r * z_r - z_i * z_i + c_r;
					z_i = 2 * z_i * tmp + c_i;
					i++;
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
