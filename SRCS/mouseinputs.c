/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouseinputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:02:10 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/16 11:40:38 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int     mouse_manager(int button, t_env *env)
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
    commandcenter(env);
return (0);
}
