#include "../INCLUDES/fractol.h"

int     main(void)
{
    t_env *env;

    if(!(env = ft_memalloc(sizeof(t_env))))
        return (1);
    env->maxiter = 9;
    setup(env);
	mlx_key_hook(env->win, key_manager,env);
    //mlx_hook(env->win, key_manager, env);
    pixelwalk(env);
    mlx_loop(env->mlx);
}
