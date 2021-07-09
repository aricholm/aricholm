/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:24:46 by aricholm          #+#    #+#             */
/*   Updated: 2021/07/09 12:36:07 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	use_string(t_flags flag, va_list ap)
{
	char	*str;
	size_t	len;
	size_t	char_counter;

	char_counter = 0;
	str = va_arg(ap, char *);
	len = ft_strlen(str);
	if (flag.precision < len && flag.dot)
		len = flag.precision;
	if (flag.width > len && !flag.minus)
		char_counter += write_spaces(flag.width - len);
	char_counter += write_string(str, len);
	if (flag.width > len && flag.minus)
		char_counter += write_spaces(flag.width - len);
	return (char_counter);
}
