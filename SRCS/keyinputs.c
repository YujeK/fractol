/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyinputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/12 19:17:29 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int     key_manager(int key, t_env *env)
{
    if (key == 53)
        exit(0);
    ft_putstr("keyinput :");
    ft_putnbr(key);
    ft_putchar('|');
    mlx_clear_window(env->mlx, env->win);
    return (0);
}
