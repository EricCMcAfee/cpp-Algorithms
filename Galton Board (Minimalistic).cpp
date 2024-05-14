#include <iostream>


using namespace std;
int BOARDSIZE = 9;
int NUM_BALLS = 1000000;

int main()
{
   //seed the rand() function
   srand(time(0));
   //initialize the array and sete values to 0
   int distribution[BOARDSIZE];
   for (int i = 0; i < BOARDSIZE; i++)
   {
      distribution[i] = 0;
   }
   //main loop for each ball
   for (int i = 0; i < NUM_BALLS; i++)
   {
      int ball = 0;
      //inner loop for each row of pegs
      for (int j = 0; j < BOARDSIZE - 1; j++)
      {
         int probability = rand() % 2;
         if (probability == 1)
         {
            ball ++;
         }
      }
      distribution[ball]++;
      if (i % 100000 == 0)
      {
         cout << "Simulating " << i << " ball drops..." << endl;
      }
   }
   for (int i = 0; i < BOARDSIZE; i++)
   {
     cout << distribution[i] << " ";
   }
   
   return 0;
}