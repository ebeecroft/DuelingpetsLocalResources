#include <stdlib.h>
#include <iostream>
double getTax(int& pointsGained);
int main(int argc, char* argv[])
{
   if(argc == 2)
   {
      //Setup up of donation variables
      int count = 1;
      int limit = 1;
      int pointsGained = 0;
      double tax = 0.0;

      //Initializes the points variable
      for(int index = 0; index < limit; index++)
      {
         pointsGained = atoi(argv[count]);
         count++;
      }

      //Retrieves donation points and returns them to ruby
      tax = getTax(pointsGained);
      std::cout << pointsGained << "," << tax;
   }
}
