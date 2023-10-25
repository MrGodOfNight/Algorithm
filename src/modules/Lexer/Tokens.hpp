#include <map>
#include <string>
#include <regex>

namespace Lexer
{
  //TODO: Доделать и продумать работу обычных типов в классе Types.
  /**
   * @class Tokens абстрактный класс, который хранит информацию о всех Лексемах.
   * Каждый класс лексем наследуется от этого класса.
  */
  class Tokens
  {
    private:
    public:
  };
  /**
   * @class Types класс, который наследуется от класса Tokens. Он хранит информацию о простейших типах как:
   * пробелы, табы, кавычки и т.д
  */
  class Types : public Tokens
  {
    private:
    std::map<std::string, std::regex> types =
    {
      {"SPACE", std::regex(" |\t|\r|\n")}
    };
  };

  
  
} // namespace Lexer
