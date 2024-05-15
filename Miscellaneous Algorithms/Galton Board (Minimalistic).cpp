#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // seed the rand() function
   srand(time(0));

   // collect simulation parameters from user
   cout << "Please enter the size of the board for your simulation >";
   int boardsize;
   cin >> boardsize;
   cout << "Please enter the number of balls for your simulation >";
   int num_balls;
   cin >> num_balls;

   // initialize the vector and set all values to 0
   vector<int> distribution(boardsize);
   for (int i = 0; i < boardsize; i++)
   {
      distribution[i] = 0;
   }

   // main loop for each ball
   for (int ball_num = 0; ball_num < num_balls; ball_num++)
   {
      int ball_pos = 0;
      // inner loop for each row of pegs
      for (int row = 0; row < boardsize - 1; row++)
      {
         int probability = rand() % 2;
         if (probability == 1)
         {
            ball_pos++;
         }
      }
      distribution[ball_pos]++;
      if (ball_num % 100000 == 0 && ball_num != 0)
      {
         cout << "Simulating " << ball_num << " ball drops..." << endl;
      }
   }
   // loop over the resulting array and print
   for (int i = 0; i < boardsize; i++)
   {
      cout << distribution[i] << " ";
   }

   return 0;
}