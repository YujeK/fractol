#ifndef FRACTOL_H
# define FRACTOL_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "../mlx/mlx.h"
# include <fcntl.h>

# define YDIM       1200
# define XDIM       1200


# define XMINBROT   -2.7
# define XMAXBROT   -0.2
# define YMINBROT   -1.7
# define YMAXBROT   0.7
# define MAXITER    7

# define XMINJULIA -2
# define XMAXJULIA  2
# define YMINJULIA 0
# define YMAXJULIA 0


# define PINK       0xFD2BE6
# define BLUE       0x0012FD
# define RED        0xFD0000
# define CYAN       0x00F3FD
# define YELLOW     0xFDF800
# define GREEN      0x05FD00
# define BROWN      0x8C4629
# define ORANGE     0xF87C00
# define WHITE      0xFFFFFF
# define BLACK      0x000000
# define PURPLE     0x7400AC
# define GREY       0x9A9A9A

typedef struct      s_env
{
    int             tuto;
    int             insanecolor;
    int             ilikeit;
    double          xminjulia;
    double          xmaxjulia;
    double          yminjulia;
    double          ymaxjulia;
    double          step;
    int             coloriter;
    int             fracton;
    int             maxiter;
    int             x;
    int             y;
    int             s_l;
    int             endian;
    int             bpp;
    void            *img;
    int             *img_str;
    void            *mlx;
    void            *win;
}                   t_env;

void                wavy(t_env *env);
void                dragon(t_env *env);
void                cursor(t_env * env);
void                julia(t_env *env);
void                flower(t_env *env);
void                ramhead(t_env *env);
void                disone(t_env *env);
void                mandelcruz(t_env *env);
void                batmandel(t_env *env);
void                mandelbro(t_env *env);
void                pixelwalk(t_env *env);
void                fill_pxl(t_env *env);
void                setup(t_env *env);
int                 key_manager(int key, t_env *env);

#endif
