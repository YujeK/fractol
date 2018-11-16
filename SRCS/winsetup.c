/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winsetup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:52:29 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/16 07:43:23 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void    setup(t_env *env)
{
env->mlx = mlx_init();
env->win = mlx_new_window(env->mlx, XDIM, YDIM, "Frac'Chicken");
    env->coloriter = 1;
    env->maxiter = 0;
    env->xminjulia = XMINJULIA;
    env->xmaxjulia = XMAXJULIA;
    env->fracton = 0;
    env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
    env->yminjulia = -0.5 * YDIM * env->step;
    env->ymaxjulia = 0.5 * YDIM * env->step;
}
