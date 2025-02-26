/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:32:25 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/26 16:59:37 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mlx_playground.h"

int	key_pressed(int keycode, t_wrapper *wrapper)
{
	if (keycode == XK_Escape)
		full_quit(wrapper);
	if (!key_inlist(wrapper->keypressed, keycode))
		key_add(&wrapper->keypressed, keycode);
	return (keycode);
}

int	key_release(int keycode, t_wrapper *wrapper)
{
	if (key_inlist(wrapper->keypressed, keycode))
		key_remove(&wrapper->keypressed, keycode);
	return (keycode);
}
