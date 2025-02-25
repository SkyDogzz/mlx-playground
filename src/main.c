/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:19:15 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/25 15:28:21 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mlx_playground.h"

int	full_quit(t_mlx *mlx)
{	
	mlx_loop_end(mlx->ptr);
	return (true);
}

int	key_pressed(int keycode, t_mlx *mlx)
{
	if (keycode == XK_Escape)
		full_quit(mlx);
	return (keycode);
}

int	expose(int expose, t_mlx *mlx)
{
	printf("here\n");
	return (expose);
	(void) mlx;
}

int	main(int argc, char *argv[])
{
	t_mlx	mlx;

	if (argc < 2)
		exit_with_error("Need atleast 1 params", EX_USAGE);
	if (ft_strcmp("idle", argv[1]) == 0)
		printf("idle\n");
	mlx.ptr = mlx_init();
	if (!mlx.ptr)
		exit_with_error("Error with mlx_init()", EX_SOFTWARE);
	mlx.win = mlx_new_window(mlx.ptr, 720, 480, "Here is the title");
	if (!mlx.win)
		exit_with_error("Error with mlx_new_window()", EX_SOFTWARE);
	mlx_key_hook(mlx.win, key_pressed, &mlx);
	mlx_hook(mlx.win, 17, 0, &full_quit, &mlx);
	mlx_loop(mlx.ptr);
	mlx_destroy_window(mlx.ptr, mlx.win);
	mlx_destroy_display(mlx.ptr);
	free(mlx.ptr);
	return (EXIT_SUCCESS);
}
