/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayd <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:44:31 by rayd              #+#    #+#             */
/*   Updated: 2021/10/08 21:48:06 by rayd             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main()
{
	write(2, "hihi\n", 4);
	return 0;
}
