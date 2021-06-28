/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:18:07 by namerei           #+#    #+#             */
/*   Updated: 2021/06/27 15:18:10 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>                         // для оператора cout
#include <cctype>                           // для функции toupper
 
int main(int ac, char **av)
{
  if (ac == 1) {
	  std::cout << "\342\230\272" << "\t";
	  std::cout << "SHHH SHHH..." << "\t";
	  std::cout << "\342\230\272" << "\n";
  }
  for(int ix = 1; av[ix]; ix++)
  {
	 for(int i = 0; av[ix][i]; i++) { 
    	std::cout << (char)toupper(av[ix][i]);
	 }
	std::cout << " ";
	if (av[ix + 1] == NULL)
		std::cout << "\n";
  }
  return 0;
}
