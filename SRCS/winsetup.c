/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winsetup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:52:29 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/12 19:19:33 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void    setup(t_env *env)
{
env->mlx = mlx_init();
env->win = mlx_new_window(env->mlx, XDIM, YDIM, "Frac'Chicken");
}
