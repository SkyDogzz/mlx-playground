/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:19:15 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/26 17:03:06 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mlx_playground.h"

int	handle_loop(t_wrapper *wrapper)
{
	return (1);
	(void) wrapper;
}

int	main(void)
{
	t_wrapper	wrapper;

	wrapper.mlx.ptr = mlx_init();
	if (!wrapper.mlx.ptr)
		exit_with_error("Error with mlx_init()", EX_SOFTWARE);
	wrapper.mlx.win = mlx_new_window(wrapper.mlx.ptr, W_W, W_H, "Title");
	if (!wrapper.mlx.win)
		exit_with_error("Error with mlx_new_window()", EX_SOFTWARE);
	mlx_hook(wrapper.mlx.win, 2, 1l << 0, key_pressed, &wrapper);
	mlx_hook(wrapper.mlx.win, 3, 1l << 1, key_release, &wrapper);
	mlx_hook(wrapper.mlx.win, 17, 0, full_quit, &wrapper);
	mlx_loop_hook(wrapper.mlx.ptr, handle_loop, &wrapper);
	mlx_loop(wrapper.mlx.ptr);
	mlx_destroy_window(wrapper.mlx.ptr, wrapper.mlx.win);
	mlx_destroy_display(wrapper.mlx.ptr);
	key_clear(&wrapper.keypressed);
	free(wrapper.mlx.ptr);
	return (EXIT_SUCCESS);
}
