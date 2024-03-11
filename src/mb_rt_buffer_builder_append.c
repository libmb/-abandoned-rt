/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_rt_buffer_builder_append.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 23:04:22 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/11 23:16:06 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

#include <stdlib.h>
#include <string.h>

static t_err	preserve_capacity(t_mb_rt_buffer_builder *self, size_t to)
{
	size_t	new_capacity;
	void	*new_buffer;

	if (to > self->capacity)
		return (false);
	new_capacity = self->capacity * 2;
	if (new_capacity < to)
		new_capacity = to;
	new_buffer = malloc(new_capacity);
	if (!new_buffer)
		return (true);
	memcpy(new_buffer, self->buffer, self->length);
	free(self->buffer);
	self->buffer = new_buffer;
	self->capacity = new_capacity;
	return (false);
}

t_err	mb_rt_buffer_builder_append(
	t_mb_rt_buffer_builder *self,
	t_mb_rt_buffer buffer
)
{
	if (preserve_capacity(self, self->length + buffer.length))
		return (true);
	memcpy((char *)self->buffer + self->length, buffer.buffer, buffer.length);
	return (false);
}

// TODO: remove use of memcpy
