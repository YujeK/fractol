/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyinputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/14 03:14:21 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int     key_manager(int key, t_env *env)
{
    if (key == 53)
        exit(0);
    if (key == 78)
        env->maxiter--;
    if(key == 69)
        env->maxiter++;
    ft_putstr("keyinput :");
    ft_putnbr(key);
    ft_putchar('|');

	mandelbro(env);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
    return (0);
}
