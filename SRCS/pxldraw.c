/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pxldraw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:16:31 by asamir-k          #+#    #+#             */
/*   Updated: 2018/11/12 22:51:46 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"


void    fill_pxl(t_env *env)
{
	int		limit;
	int		idx;

	limit = YDIM * XDIM;
	idx = 0;
	while (idx < limit)
	{
		env->img_str[idx] = PINK;
		idx++;
	}
}
