# include "so_long.h"


void ft_free_arr(char **map, int n)
{
	n = n - 1;
	while (n >= 0)
	{
		free(map[n--]);
	}
	free(map);
}

void ft_free_mlptr(mlptr *mlptr)
{	
			if (mlptr->imgw)
				mlx_destroy_image(mlptr->mlx_ptr, mlptr->imgw);
			if (mlptr->imgp)
				mlx_destroy_image(mlptr->mlx_ptr, mlptr->imgp);
			if (mlptr->imgc)
			 	mlx_destroy_image(mlptr->mlx_ptr, mlptr->imgc);
			if (mlptr->imgs)
				mlx_destroy_image(mlptr->mlx_ptr, mlptr->imgs);
			if (mlptr->imge)
				mlx_destroy_image(mlptr->mlx_ptr, mlptr->imge);
			mlx_destroy_window(mlptr->mlx_ptr, mlptr->mlx_wind);
			mlx_destroy_display(mlptr->mlx_ptr);
			free(mlptr->mlx_ptr);
			ft_free_arr(mlptr->map,mlptr->high);
}

