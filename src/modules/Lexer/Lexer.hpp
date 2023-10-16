#include <string>

namespace Lexer
{
  class Lexer
  {
    private:
    public:
      //Lexer();
      //~Lexer();

      /**
      * Метод, который прочитывает строку и раскидывает её на токены
      * @param line строка, которую надо разделить на токены.
      */
      void readLine(std::string line);
  };
  
  //Lexer::Lexer()
  //{
  //}

  //Lexer::~Lexer()
  //{
  //}
  
} // namespace Lexer
