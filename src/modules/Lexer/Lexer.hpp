#include <vector>
#include "Tokens.hpp"

namespace Lexer
{
  class Lexer
  {
    private:
    /**
     * Динамический массив, который хранит все лексемы.
    */
    std::vector<Tokens> tokens;
    public:
      /**
       * Метод, который прочитывает строку и раскидывает её на токены
       * @param line строка, которую надо разделить на токены.
      */
      void readLine(std::string line);
  };
} // namespace Lexer