#include <iostream>
#include <string>
#include <fstream>
#include "./modules/Lexer/Lexer.hpp"

int main() 
{
  //TODO: Реализовать поддержку файлов на русском языке + поддержку русского языка в консоли на всех платформах.
  std::string line, fileName;
  Lexer::Lexer lex;

  std::cout << "Введите адрес файла для компиляции: " << std::endl; //Disk:/source/глав.alg

  std::getline(std::cin, fileName);
  
  std::ifstream file (fileName, std::ios::in);

  if (!file)
  {
    std::cout << "Файл не открыт" << std::endl;

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