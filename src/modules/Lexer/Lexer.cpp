#include <string>
#include <fstream>
#include "Lexer.hpp"

namespace Lexer
{
  void Lexer::readLine(std::string line)
  {
    std::string delimiters = "().{}[]+-%=<>!&|,;:\"\'\\ |\t|\r|\n";

    std::ofstream out("main.alg", std::ios::app);
    if (out.is_open())
    {
      size_t startPos = 0;
      size_t endPos = line.find_first_of(delimiters, startPos);

      while (endPos != std::string::npos)
      {
        std::string lexem = line.substr(startPos, endPos - startPos);
        out << lexem << std::endl;

        // Сохранение разделителя как отдельного токена
        std::string delimiterLexem = line.substr(endPos, 1);
        out << delimiterLexem << std::endl;

        startPos = endPos + 1;
        endPos = line.find_first_of(delimiters, startPos);
      }

      // Обработка последнего токена после последнего разделителя
      std::string lastLexem = line.substr(startPos);
      out << lastLexem << std::endl;
    }
    out.close();
  }
} // namespace Lexer
