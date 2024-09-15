#ifndef IMAGE_H
# define IMAGE_H

# include "mlx_struct.h"
# include "parser.h"

t_image			create_img(t_mlx mlx, int height, int width);
void			set_pixel(t_image *img, int x, int y, int color);
int				get_pixel(t_image *img, int x, int y);
t_image			load_xpm(void *mlx, char *path);

t_texture_data	load_textures(void *mlx, t_map_metadata metadata);

#endif