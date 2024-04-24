#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <vector>


using namespace std;

main()
{
   char chars[] = "Hello World";
   int size = strlen(chars);
   for (int i = 0; i < size; i++)
   {
      cout << chars[i];
   }
}

