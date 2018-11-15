#include "../INCLUDES/fractol.h"

int     main(void)
{
    t_env *env;

    if(!(env = ft_memalloc(sizeof(t_env))))
        return (1);
        env->coloriter = 1;
    env->maxiter = 9;
    env->xminjulia = XMINJULIA;
    env->xmaxjulia = XMAXJULIA;
    env->fracton = 0;
    env->step = (env->xmaxjulia - env->xminjulia) / XDIM;
    env->yminjulia = -0.5 * YDIM * env->step;
    env->ymaxjulia = 0.5 * YDIM * env->step;
    setup(env);
    cursor(env);
	mlx_hook(env->win, 2, 0, key_manager, env);
   // mlx_hook(env->win, 6, 0, mouse_manager, env);
    pixelwalk(env);
    mlx_loop(env->mlx);
}
