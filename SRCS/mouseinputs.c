/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouseinputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:02:10 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/19 17:52:07 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void    rainbowcolor(int button, int x, int y, t_env *env)
{
if (x > 0 && x < 178 && y > 1050 && y < 1200 && env->fracton == 10)
    {
        if (button == 1)
            env->ilikeit = 1;
        env->fracton = 0;
    }
}

int    mouse_twerk(int x, int y, t_env *env)
{


if (x > 0 && x < XDIM && y > 0 && y < YDIM)
{
    if (env->prevx < x)
    env->cr += 0.05;
    if (env->prevx > x)
    env->cr -= 0.05;
    if (env->prevy > y)
    env->ci -= 0.05;
    if (env->prevy < y)
    env->ci += 0.05;
env->prevx = x;
env->prevy = y;
        fractalselection(1, env);
        commandcenter(env);
}
    return (1);
}
void    scrollzoom(int button, int x, int y, t_env *env)
{
    if (x > 0 && y > 0)
    {
        if (button == 4)
        {
            env->xmaxjulia += 100 * env->step;
            env->xminjulia -= 100 * env->step;
            env->ymaxjulia += 100 * env->step;
            env->yminjulia -= 100 * env->step;
            env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
        }
    if (button == 5)
        {
            env->xmaxjulia -= 100 * env->step;
            env->xminjulia += 100 * env->step;
            env->ymaxjulia -= 100 * env->step;
            env->yminjulia += 100 * env->step;
            env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
        }
    }
        fractalselection(1, env);
    if (button == 2)
    {
        env->ci = 0;
        env->cr = 0;
    }
}

int     mouse_manager(int button, int x, int y, t_env *env)
{
    rainbowcolor(button, x, y, env);
    scrollzoom(button, x, y, env);
    commandcenter(env);
return (0);
}
