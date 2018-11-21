/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractalbucket.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 08:48:06 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 08:16:53 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		fractalbucket(t_env *env)
{
	int		h;
	int		w;

	h = YDIM;
	w = XDIM;
	if (!(env->bucket = mlx_xpm_file_to_image(env->mlx, \
			"./FILES/starter.xpm", &w, &h)))
		return (0);
	if (!(env->rbckt = mlx_xpm_file_to_image(env->mlx, \
			"./FILES/rainbowbckt.XPM", &w, &h)))
		return (0);
	return (1);
}
