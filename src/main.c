/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:19:15 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/18 19:19:43 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mlx_playground.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		exit_with_error("Need atleast 1 params", EX_USAGE);
	(void) argv;
}
