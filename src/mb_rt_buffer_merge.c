/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_rt_buffer_merge.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:56:00 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/11 23:16:16 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

t_err	mb_rt_buffer_merge(
	size_t count,
	const t_mb_rt_buffer *buffers,
	t_mb_rt_buffer *out
)
{
	t_mb_rt_buffer_builder	*result;
	size_t					i;

	result = mb_rt_buffer_builder_new();
	if (!result)
		return (true);
	i = (size_t)-1;
	while (++i < count)
	{
		if (mb_rt_buffer_builder_append(result, buffers[i]))
		{
			mb_rt_buffer_builder_delete(result);
			return (true);
		}
	}
	mb_rt_buffer_builder_build(result, out);
	mb_rt_buffer_builder_delete(result);
	return (false);
}
