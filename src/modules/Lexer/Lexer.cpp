#include "Lexer.hpp"
#include <string>
#include <fstream>

namespace Lexer
{
  void Lexer::readLine(std::string line)
  {
    std::string delimiters = "().{}[]+-*/%=<>!&|,;:\"'\t\\ ";

    std::ofstream out("main.alg", std::ios::app);
    if (out.is_open())
    {
      size_t startPos = 0;
      size_t endPos = line.find_first_of(delimiters, startPos);

      while (endPos != std::string::npos)
      {
        std::string token = line.substr(startPos, endPos - startPos);
        out << token << std::endl;

        // Сохранение разделителя как отдельного токена
        std::string delimiterToken = line.substr(endPos, 1);
        out << delimiterToken << std::endl;

        startPos = endPos + 1;
        endPos = line.find_first_of(delimiters, startPos);
      }

      // Обработка последнего токена после последнего разделителя
      std::string lastToken = line.substr(startPos);
      out << lastToken << std::endl;
    }
    out.close();
  }
} // namespace Lexer
