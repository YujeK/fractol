/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dragon.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:10:11 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 12:45:30 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ifrac(t_env *e)
{
	double r2;
	double i2;

	r2 = e->z_r * e->z_r;
	i2 = e->z_i * e->z_i;
	while (r2 + i2 < 4 && e->i < e->maxiter)
	{
		e->tmp = e->z_r * 2;
		e->z_r = r2 - i2 + e->c_r;
		e->z_i = 2 * e->z_i * e->tmp + e->c_i;
		r2 = e->z_r * e->z_r;
		i2 = e->z_i * e->z_i;
		e->i++;
	}
}

void	dragon(t_env *e)
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
			ifrac(e);
			if (e->ilikeit == 1)
				e->img_str[XDIM * e->y + e->x] = e->i * RB / e->maxiter;
			else
				e->img_str[XDIM * e->y + e->x] = e->i * 211 / e->maxiter;
			e->x++;
		}
		e->y++;
	}
}
