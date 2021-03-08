# include <iostream>
# include "Font.h"
# include "Icon.h"
using namespace std;
using namespace Font;

int main() {
   auto reset = Style::Reset;

   cout << Icon::Check << "This is a C++ colorama." << endl;

   cout << endl;

   cout << Fore::Red << "Hello " << Back::White << "World" << reset << endl;
   cout << Style::Italic << "Hello World" << reset << endl;
   cout << Style::CrossOut << "Hello World" << reset << endl;
   cout << Style::Underline << "Hello World" << reset << endl;

   cout << endl;

   for (int a = 0; a <= 255; a++) {
      cout << Back::RGB(a, a, a) << " ";
   }

   cout << reset << "\n";
}
