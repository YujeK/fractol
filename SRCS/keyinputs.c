/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyinputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:38 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/21 15:14:23 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	toolbox(int key, t_env *env)
{
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
		env->ci = 0.01;
		env->cr = 0.285;
	}
	if (key == 43)
		env->display = 1;
	if (key == 47)
		env->display = 0;
	if (key == 35)
		env->ilikeit = 1;
}

void	translation(int key, t_env *env)
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

void	fractalselection(int key, t_env *env)
{
	if (key == 83)
		env->fra = 1;
	if (key == 84)
		env->fra = 2;
	if (key == 85)
		env->fra = 3;
	if (key == 86)
		env->fra = 4;
	if (key == 87)
		env->fra = 5;
	if (key == 88)
		env->fra = 6;
	if (key == 89)
		env->fra = 7;
	if (key == 91)
		env->fra = 8;
	if (key == 92)
		env->fra = 9;
}

int		key_manager(int key, t_env *env)
{
		if (key == 53)
		{
			system("killall afplay 2>/dev/null");
			exit(0);
		}
	if (key == 31)
	{
		env->ilikeit = 0;
		system("pkill afplay");
	}
	if (key == 82)
		env->fra = 10;
	if (key == 45)
	{
		env->wing = 1;
		if (env->fdisplay == 1)
			env->display = 0;
	}
	translation(key, env);
	toolbox(key, env);
	fractalselection(key, env);
	fractalselect(env);
	commandcenter(env);
	return (0);
}
