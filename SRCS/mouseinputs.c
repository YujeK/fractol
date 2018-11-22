/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouseinputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:02:10 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/22 20:38:52 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		rainbowcolor(int button, int x, int y, t_env *env)
{
	if (x > 860 && x < 905 && y > 830 && y < 870 && env->fra == 10)
	{
		if (button == 1)
		{
			env->ilikeit = 1;
			env->ci = 0.01;
			env->cr = 0.285;
			env->fra = 4;
			env->maxiter = 0;
			system("killall afplay 2>/dev/null");
			system("afplay FILES/rakoonjustin.mp3 &");
		}
	}
	return (1);
}

int		mouse_twerk(int x, int y, t_env *env)
{
	if (x > 0 && x < XDIM && y > 0 && y < YDIM && env->cockblock == 0)
	{
		env->cr = env->xminjulia + x * env->step;
		env->ci = env->yminjulia + y * env->step;
		fractalselect(env);
	}
	return (1);
}

int		scrollzoom(int button, int x, int y, t_env *env)
{
	env->mcx = (x - XDIM / 2) * env->step;
	env->mcy = (y - YDIM / 2) * env->step;
	if (x > 0 && y > 0)
	{
		if (button == 4)
		{
			env->xmaxjulia += env->mcx + (100 * env->step);
			env->xminjulia += env->mcx - (100 * env->step);
			env->ymaxjulia += env->mcy + (100 * env->step);
			env->yminjulia += env->mcy - (100 * env->step);
			env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
			fractalselect(env);
		}
		else if (button == 5)
		{
			env->xmaxjulia += env->mcx - (100 * env->step);
			env->xminjulia += env->mcx + (100 * env->step);
			env->ymaxjulia += env->mcy - (100 * env->step);
			env->yminjulia += env->mcy + (100 * env->step);
			env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
			fractalselect(env);
		}
	}
	return (1);
}

int		mouse_manager(int button, int x, int y, t_env *env)
{
	if (button == 2)
	{
		if (env->cockblock == 0)
			env->cockblock = 1;
		else
			env->cockblock = 0;
	}
	else
	rainbowcolor(button, x, y, env);
	scrollzoom(button, x, y, env);
	return (0);
}
