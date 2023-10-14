#include "Lexer.hpp"
#include <string>
#include <fstream>

namespace Lexer
{
  void Lexer::readLine(std::string line)
  {
    //NOTE: This is for testing!
    std::ofstream out;
    out.open("main.alg", std::ios::app);
    if (out.is_open())
    {
      out << line << std::endl;
    }
    out.close();
    //TODO: read a string and parse it into tokens.
  }
} // namespace Lexer
