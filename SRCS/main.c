#include "../INCLUDES/fractol.h"

int     main(int ac, char **av)
{
// if (argc != 1 );
    //ft_error////
    (void) ac;
    t_env   env;
    env.display = 1;
    env.name = av[1];
    setup(&env);
    pixelwalk(&env);
    fractalbucket(&env);
    commandcenter(&env);
    mlx_loop(env.mlx);
}
