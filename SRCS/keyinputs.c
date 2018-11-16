/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyinputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/16 10:59:55 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void    zoom(int key, t_env *env)
{
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
}

void    toolbox(int key, t_env *env)
{
    if (key == 53)
        exit(0);
    if (key == 78)
        env->maxiter--;
    if (key == 69)
        env->maxiter++;
    if (key == 49)
        {
            env->maxiter = 0;
            env->xminjulia = XMINJULIA;
            env->xmaxjulia = XMAXJULIA;
            env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
            env->yminjulia = -0.5 * YDIM * env->step;
            env->ymaxjulia = 0.5 * YDIM * env->step;
        }
    if(key == 43)
        env->display = 1;
    if (key == 47)
        env->display = 0;
    if (key == 35)
        env->ilikeit = 1;
    if (key == 31)
        env->ilikeit = 0;
}
void    translation(int key, t_env *env)
{
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
}

void        fractalselection(int key, t_env *env)
{
    if (env->fracton == 0)
        {
            fractalselect(env);
        }
    if (key == 83 || env->fracton == 1)
    {
        julia(env);
        env->fracton = 1;
    }
    if (key == 84 || env->fracton == 2)
    {
        ramhead(env);
        env->fracton = 2;
    }
    if (key == 85 || env->fracton == 3)
    {
        disone(env);
        env->fracton = 3;
    }
    if (key == 86 || env->fracton == 4)
    {
        flower(env);
        env->fracton = 4;
    }
    if (key == 87 || env->fracton == 5)
    {
        batmandel(env);
        env->fracton = 5;
    }
    if (key == 88 || env->fracton == 6)
    {
        mandeland(env);
        env->fracton = 6;
    }
    if (key == 89 || env->fracton == 7)
    {
        mandelbro(env);
        env->fracton = 7;
    }
    if (key == 91 || env->fracton == 8)
    {
        dragon(env);
        env->fracton = 8;
    }
    if (key == 92 || env->fracton == 9)
    {
        chickenbrot(env);
        env->fracton = 9;
    }
}

int    key_manager(int key, t_env *env)
{
    if (key == 45)
        env->wing = 1;
    translation(key, env);
    toolbox(key, env);
    zoom(key, env);
    fractalselection(key, env);
    commandcenter(env);
    return (0);
}
