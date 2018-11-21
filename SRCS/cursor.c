/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cursor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:17:45 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/20 12:22:17 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	cursor(t_env *env)
{
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 - 4, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 - 3, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 - 2, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 - 1, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 + 1, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 + 2, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 + 3, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2 + 4, YDIM / 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 - 4, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 - 3, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 - 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 - 1, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 + 1, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 + 2, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 + 3, WHITE);
	mlx_pixel_put(env->mlx, env->win, XDIM / 2, YDIM / 2 + 4, WHITE);
}
