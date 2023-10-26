

namespace Lexer
{
  class Space : public Tokens
  {
  };
  class Endline : public Tokens
  {
  };
  class OpenParentheses : public Tokens
  {
  };
  class CloseParentheses : public Tokens
  {
  };
  class OpenCodeBlock : public Tokens
  {
  };
  class CloseCodeBlock : public Tokens
  {
  };
  class Comm : public Tokens
  {
  };
  class MultiCommStart : public Tokens
  {
  };
  class MultiCommEnd : public Tokens
  {
  };
}