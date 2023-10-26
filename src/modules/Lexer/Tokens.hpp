#include <map>
#include <string>
#include <regex>
#include "SimpleTypes.hpp"


#define REG std::regex
  

namespace Lexer
{
  //TODO: Доделать и продумать работу обычных типов в классе Types.
  /**
   * @class Tokens абстрактный класс, который хранит информацию о всех Лексемах.
   * Каждый класс лексем наследуется от этого класса.
  */
  class Tokens
  {
  };
  /**
   * @class Types класс, который наследуется от класса Tokens. Он хранит информацию о простейших типах как:
   * пробелы, табы, кавычки и т.д
  */
  class SimpleTypes : public Tokens
  {
    private:
      std::map<std::string, REG> types1 =
      {
        {"SPACE", REG(" |\t|\r|\n")},
        {"ENDLINE", REG(";")},
        {"OPEN_PARENTHESES", REG("(")},
        {"CLOSE_PARENTHESES", REG(")")},
        {"OPEN_CODE_BLOCK", REG("{")},
        {"CLOSE_CODE_BLOCK", REG("}")},
        {"COMM", REG("//.*")},
        {"MULTI_COMM_START", REG("(?<!\\S)/*.*")},
        {"MULTI_COMM_END", REG(".*?*/")}
      };
    public:
      
  };
} // namespace Lexer
