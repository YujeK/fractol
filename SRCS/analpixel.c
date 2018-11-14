/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analpixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:31:19 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/14 03:15:14 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void    pixelwalk(t_env *env)
{
    (env->img = mlx_new_image(env->mlx, XDIM, YDIM));

    env->img_str = (int*)mlx_get_data_addr(env->img,
	&(env->bpp), &(env->s_l), &(env->endian));

    mandelbro(env);

    mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
}
