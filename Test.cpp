#include <iostream>
#include <cstring>

using namespace std;

int main()
{

int score = 0;
double price = 100;
if (score > 0 && price < 200 && price / score > 10)
{
   cout << "buy" << endl;
}

return 0;

}