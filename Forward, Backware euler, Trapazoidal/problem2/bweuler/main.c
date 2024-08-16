#include<stdlib.h>
#include<stdio.h>
#include "prob1.h"

int main()
{
    char* file_name[4] = {"bweuler_1.dat", "bweuler_2.dat", "bweuler_3.dat", "bweuler_4.dat"};
    double h[] = {0.05, 0.1, 0.5, 0.8};
    
    for(int i=0; i < 4; i++)
    {
		  backward_euler(h[i], file_name[i]);
    }
    
   return 0;
}