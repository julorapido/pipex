/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <jsaintho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:05:31 by jsaintho          #+#    #+#             */
/*   Updated: 2024/05/29 15:54:32 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int p)
{
	if ((p >= 65 && p <= 90) || (p >= 97 && p <= 122))
	{
		return (1);
	}
	return (0);
}