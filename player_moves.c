#include "so_long.h"

void ft_change_map_imga(mlptr *mlptr)
{

	if (mlptr->map[mlptr->pj][mlptr->pi - 1] == '0')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pi = mlptr->pi - 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
	}
	if (mlptr->map[mlptr->pj][mlptr->pi - 1] == 'C')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pi = mlptr->pi - 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->c--;
	}
	if (mlptr->map[mlptr->pj][mlptr->pi - 1] == 'E' && mlptr->c == 0)
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		ft_free_mlptr(mlptr);
		exit(1);
	}
}

void ft_change_map_imgs(mlptr *mlptr)
{

	if (mlptr->map[mlptr->pj + 1][mlptr->pi] == '0')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pj = mlptr->pj + 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
	}
	if (mlptr->map[mlptr->pj + 1][mlptr->pi] == 'C')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pj = mlptr->pj + 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->c--;
	}
	if (mlptr->map[mlptr->pj + 1][mlptr->pi] == 'E' && mlptr->c == 0)
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		ft_free_mlptr(mlptr);
		exit(1);
	}
}

void ft_change_map_imgd(mlptr *mlptr)
{

	if (mlptr->map[mlptr->pj][mlptr->pi + 1] == '0')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pi = mlptr->pi + 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
	}
	if (mlptr->map[mlptr->pj][mlptr->pi + 1] == 'C')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pi = mlptr->pi + 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->c--;
	}
	if (mlptr->map[mlptr->pj][mlptr->pi + 1] == 'E' && mlptr->c == 0)
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		ft_free_mlptr(mlptr);
		exit(1);
	}
}

void ft_change_map_imgw(mlptr *mlptr)
{

	if (mlptr->map[mlptr->pj - 1][mlptr->pi] == '0' )
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pj = mlptr->pj - 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
	}
	if (mlptr->map[mlptr->pj - 1][mlptr->pi] == 'C')
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->pj = mlptr->pj - 1;
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgp, mlptr->pi * 50, mlptr->pj * 50);
		mlptr->c--;
	}
	if (mlptr->map[mlptr->pj - 1][mlptr->pi] == 'E' && mlptr->c == 0)
	{
		mlptr->map[mlptr->pj][mlptr->pi] = '0';
		mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs, mlptr->pi * 50, mlptr->pj * 50);
		ft_free_mlptr(mlptr);
		exit(1);
	}
}