#include <math.h>
double taxCalculation(int pointsGained);

double getTax(int& pointsGained)
{
   double tax = 0.0;
   tax = taxCalculation(pointsGained);
   pointsGained = round(pointsGained * tax);
   return tax;
}

double taxCalculation(int pointsGained)
{
   //Performs the calculations
   double tax = 0.0;
   if(pointsGained < 100){tax = 0.0;}
   else if(pointsGained < 500){tax = 0.06;}
   else if(pointsGained < 1000){tax = 0.12;}
   else if(pointsGained < 5000){tax = 0.09;}
   else if(pointsGained < 10000){tax = 0.16;}
   else if(pointsGained < 50000){tax = 0.13;}
   else if(pointsGained < 100000){tax = 0.21;}
   else if(pointsGained < 500000){tax = 0.17;}
   else if(pointsGained < 1000000){tax = 0.26;}
   else if(pointsGained < 5000000){tax = 0.22;}
   else if(pointsGained < 10000000){tax = 0.32;}
   else if(pointsGained < 50000000){tax = 0.27;}
   else if(pointsGained < 100000000){tax = 0.38;}
   else{tax = 0.44;}
   return tax;
}
