#include "../INCLUDES/fractol.h"

int     main(void)
{
    t_env *env;

    if(!(env = ft_memalloc(sizeof(t_env))))
        return (1);
    setup(env);
    pixelwalk(env);
    mlx_key_hook(env->win, key_manager, env);
    mlx_loop(env->mlx);
}
