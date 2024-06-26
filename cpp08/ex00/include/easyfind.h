/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:14:51 by aleperei          #+#    #+#             */
/*   Updated: 2024/06/26 19:17:32 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>


template<typename T>
typename T::iterator easyfind(T &target, int find)
{
    return (std::find(target.begin(), target.end(), find));
}



#endif