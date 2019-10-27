#include<stdio.h>

int main()
{
 int N,M, pembagian,hasil;
 scanf("%d%d",&N,&M);
 
 pembagian=N/M;
 hasil=N%M;
 
 printf("masing-masing %d\n",pembagian);
 printf("bersisa %d\n", hasil);
 	
 return 0;
}
