/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyinputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/15 12:05:32 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int     key_manager(int key, t_env *env)
{
    if (key == 53)
        exit(0);
    if (key == 78)
        env->maxiter--;
    if (key == 69)
        env->maxiter++;
    if (key == 49)
        {
            env->maxiter = 9;
            env->xminjulia = XMINJULIA;
            env->xmaxjulia = XMAXJULIA;
            env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
            env->yminjulia = -0.5 * YDIM * env->step;
            env->ymaxjulia = 0.5 * YDIM * env->step;
            env->fracton = 0;
        }
    if (key == 14)
        env->fracton++;
    if (key == 12)
        env->fracton--;
    if (key == 126)
    {
        env->ymaxjulia -= 25 * env->step;
        env->yminjulia -= 25 * env->step;
    }
    if (key == 125)
    {
        env->ymaxjulia += 25 * env->step;
        env->yminjulia += 25 * env->step;
    }
    if (key == 124)
    {
        env->xmaxjulia += 25 * env->step;
        env->xminjulia += 25 * env->step;
    }
    if (key == 123)
    {
        env->xmaxjulia -= 25 * env->step;
        env->xminjulia -= 25 * env->step;
    }
    if (key == 75)
    {
        env->xmaxjulia += 100 * env->step;
        env->xminjulia -= 100 * env->step;
        env->ymaxjulia += 100 * env->step;
        env->yminjulia -= 100 * env->step;
        env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
    }
    if (key == 67)
    {
        env->xmaxjulia -= 100 * env->step;
        env->xminjulia += 100 * env->step;
        env->ymaxjulia -= 100 * env->step;
        env->yminjulia += 100 * env->step;
        env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
    }
/*    if (key == 8)
        env->tuto = 1;
    else
        env->tuto = 0;
*/
    if (key == 35)
        env->ilikeit = 1;
    if (key == 31)
        env->ilikeit = 0;
    if (env->fracton == 0)
        julia(env);
    if (env->fracton == 2)
        ramhead(env);
    if (env->fracton == 3)
        disone(env);
    if (env->fracton == 4)
        flower(env);
    if (env->fracton == 5)
        batmandel(env);
    if (env->fracton == 6)
        mandelcruz(env);
    if (env->fracton == 1)
        mandelbro(env);
    if (env->fracton == 7)
        dragon(env);
    if (env->fracton == 8)
        wavy(env);
    if (env->fracton > 8 || env->fracton < 0)
        env->fracton = 0;
    mlx_clear_window(env->mlx, env->win);
    cursor(env);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
    return (0);
}
