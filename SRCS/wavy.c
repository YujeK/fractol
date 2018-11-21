/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wavy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:17:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 07:41:56 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	feeractus(t_env *e)
{
	while (e->z_r * e->z_r + e->z_i * e->z_i < 1 && e->i < e->maxiter)
	{
		e->tmp = e->z_r;
		e->z_r = e->z_r * e->z_r - e->z_i * e->z_i + e->c_r;
		e->z_i = 2.89 * e->z_i * e->tmp + e->c_i;
		e->i++;
	}
}

void	chickenbrot(t_env *e)
{
	e->y = 0;
	while (e->y < YDIM)
	{
		e->x = 0;
		while (e->x < XDIM)
		{
			e->c_r = e->xminjulia + e->x * e->step;
			e->c_i = e->yminjulia + e->y * e->step;
			e->z_i = 0;
			e->z_r = 0;
			e->i = 0;
			feeractus(e);
			if (e->ilikeit == 1)
				e->img_str[XDIM * e->y + e->x] = e->i * RB / e->maxiter;
			else
				e->img_str[XDIM * e->y + e->x] = e->i * 211 / e->maxiter;
			e->x++;
		}
		e->y++;
	}
}
