#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int width;
   int height;
   int number_of_windows;
   int window_area = 6;
   cout << "Wall width: " << endl;
   cout << "Wall height: " << endl;
   cout << "Number of windows: " << endl;
   cin >> width >> height >> number_of_windows;
   cout << "Area: " << height * width - number_of_windows * window_area << endl;
   
   
   return 0;
}