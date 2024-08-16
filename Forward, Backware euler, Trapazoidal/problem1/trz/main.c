#include<stdlib.h>
#include<stdio.h>
#include "prob1.h"

int main()
{
    char* file_name[4] = {"trz_1.dat", "trz_2.dat", "trz_3.dat", "trz_4.dat"};
    double h[] = {0.05, 0.1, 0.5, 0.8};
    
    for(int i=0; i < 4; i++)
    {
		  trz(h[i], file_name[i]);
    }
    
   return 0;
}