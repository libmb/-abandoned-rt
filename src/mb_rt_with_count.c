/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_rt_with_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:03:58 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/11 23:31:12 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

#include <stdlib.h>

#include "mb_rt_type.h"

t_mb_rt_stack	*mb_rt_stack_with_count(size_t count)
{
	t_mb_rt_stack *const		result = malloc(sizeof(t_mb_rt_stack));
	t_mb_rt_stack_node *const	nodes
		= malloc(sizeof(t_mb_rt_stack_node) * count);

	if (!result || !nodes)
	{
		free(result);
		free(nodes);
		return (NULL);
	}
	result->nodes = nodes;
	result->length = 0;
	result->capacity = count;
	return (result);
}
