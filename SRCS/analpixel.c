/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analpixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:31:19 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 18:59:06 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	pixelwalk(t_env *env)
{
	env->img = mlx_new_image(env->mlx, XDIM, YDIM);
	if (!(env->img_str = (int*)mlx_get_data_addr(env->img,
		&(env->bpp), &(env->s_l), &(env->endian))))
		return ;
	env->bucket = mlx_new_image(env->mlx, XDIM, YDIM);
	if (!(env->bucketstr = (int*)mlx_get_data_addr(env->bucket, &(env->bpp), \
			&(env->s_l), &(env->endian))))
		return ;
	env->rbckt = mlx_new_image(env->mlx, XDIM, YDIM);
	if (!(env->rbckt_str = (int*)mlx_get_data_addr(env->rbckt, &(env->bpp), \
			&(env->s_l), &(env->endian))))
		return ;
}
