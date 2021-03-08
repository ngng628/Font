![Font](https://user-images.githubusercontent.com/31023138/110338736-b2d31a00-806a-11eb-9e10-d28436e03a2c.png)

# Font
UNIX環境で使えるC++版colorama

# Usage

```cpp
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
```

# Install

```bash
git clone https://github.com/ngng628/Font/
cp Font/Font.h ${workspaceFolder}/
cp Font/Icon.h ${workspaceFolder}/
```
