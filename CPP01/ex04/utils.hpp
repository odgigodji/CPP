//
// Created by Nelson Amerei on 7/4/21.
//

#ifndef EX04_UTILS_HPP
#define EX04_UTILS_HPP
# include <iostream>
# include <fstream>
# include "utils.hpp"
# define CYN    "\x1B[36m"
# define BLU    "\x1B[34m"
# define RESET  "\x1B[0m"

void error(int errCode);
void writeFile(std::string &strFile, std::string filename);
void readFile(std::string &strFile, char *filename);
void replaceStrings(std::string &strFile, const std::string& s1, const std::string& s2);

#endif //EX04_UTILS_HPP
