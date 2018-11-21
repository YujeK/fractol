/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 04:20:25 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 12:53:15 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	fractus(t_env *e)
{
	while (e->z_r * e->z_r + e->z_i * e->z_i < 4 && e->i < e->maxiter)
	{
		e->tmp = e->z_r;
		e->z_r = e->z_r * e->z_r - e->z_i * e->z_i + e->c_r;
		e->z_i = 3.3 * e->z_i * e->tmp + e->c_i;
		e->i++;
	}
}

void	disone(t_env *e)
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
			fractus(e);
			if (e->ilikeit == 1)
			{
				e->img_str[XDIM * e->y + e->x] = e->i * RB / e->maxiter;
			}
			else
				e->img_str[XDIM * e->y + e->x] = e->i * 211 / e->maxiter;
			e->x++;
		}
		e->y++;
	}
}
