/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_rt_buffer_builder_new.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:59:52 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/11 23:16:13 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

#include <stdlib.h>

t_mb_rt_buffer_builder	*mb_rt_buffer_builder_new(void)
{
	t_mb_rt_buffer_builder	*result;

	result = malloc(sizeof(t_mb_rt_buffer_builder));
	if (!result)
		return (NULL);
	result->buffer = NULL;
	result->length = 0;
	result->capacity = 0;
	return (result);
}
