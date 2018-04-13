#include <string>
#include <iostream>
using namespace std;

int main()
{
  string s1("hello");
  s1.find($`const char *__s`, $`size_type __pos`, $`size_type __n`);
  s1.find_last_of($`const std::basic_string<char> &__str`);
  s1.find_first_of($`const std::basic_string<char> &__str`);
  s1.find_first_not_of($`const std::basic_string<char> &__str`);
  s1.capacity();
  s1.max_size();
  s1.length();
  s1.empty();
  
  return 0;

}
