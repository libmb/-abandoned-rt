/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:46:17 by jmaing            #+#    #+#             */
/*   Updated: 2024/03/07 23:25:03 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_rt.h"

#include <stdio.h>
#include <stdlib.h>

t_err	mb_rt_buffer_read_from_file(
	const char *file_name,
	t_mb_rt_buffer *out
)
{
	FILE	*fp;
	size_t	len;
	void	*result;
	long	position;

	fp = fopen(file_name, "rb");
	if (fp == NULL)
		return (true);
	if (fseek(fp, 0, SEEK_END) == -1)
		return (true);
	position = ftell(fp);
	if (position < 0)
		return (true);
	len = (size_t)position;
	result = malloc(len);
	if (result == NULL)
		return (true);
	if (fseek(fp, 0, SEEK_SET) == -1)
		return (true);
	if (fread(result, 1, len, fp) != len)
		return (true);
	out->buffer = result;
	out->length = len;
	return (false);
}

// TODO: change to use open/read/close system calls
