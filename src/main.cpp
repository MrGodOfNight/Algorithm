#include <iostream>
#include <string>
#include <fstream>
#include "./modules/Lexer/Lexer.hpp"

int main() 
{
  std::string fileName, line;
  Lexer::Lexer lex;

  std::cout << "Enter the address of the file to compile: " << std::endl; //Disk:/source/глав.alg

  std::getline(std::cin, fileName);
  std::cout << fileName << std::endl;
  
  std::ifstream file (fileName, std::ios::in);

  if (!file)
  {
    std::cout << "The file does not open. Please try again. " << std::endl;

    return -1;
  }

  if (file.is_open())
  {
    while (std::getline(file, line))
    {
      lex.readLine(line);
    }
  }
  file.close();
  
  return 0;
}