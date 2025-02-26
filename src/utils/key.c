/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:48:52 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/26 16:54:43 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mlx_playground.h"

bool	key_inlist(t_list *keys, int keycode)
{
	while (keys)
	{
		if (*(int *)keys->content == keycode)
			return (true);
		keys = keys->next;
	}
	return (false);
}

void	key_add(t_list **keys, int keycode)
{
	t_list	*new;
	t_list	*temp;

	temp = *keys;
	while (temp)
	{
		if (*(int *)temp->content == keycode)
			return ;
		temp = temp->next;
	}
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return ;
	new->content = malloc(sizeof(int));
	if (!new->content)
	{
		free(new);
		return ;
	}
	*(int *)new->content = keycode;
	new->next = *keys;
	*keys = new;
}

void	key_remove(t_list **keys, int keycode)
{
	t_list	*temp;
	t_list	*prev;

	temp = *keys;
	prev = NULL;
	while (temp)
	{
		if (*(int *)temp->content == keycode)
		{
			if (prev)
				prev->next = temp->next;
			else
				*keys = temp->next;
			free(temp->content);
			free(temp);
			return ;
		}
		prev = temp;
		temp = temp->next;
	}
}

void	key_clear(t_list **keys)
{
	t_list	*temp;

	while (*keys)
	{
		temp = *keys;
		*keys = (*keys)->next;
		free(temp->content);
		free(temp);
	}
}
