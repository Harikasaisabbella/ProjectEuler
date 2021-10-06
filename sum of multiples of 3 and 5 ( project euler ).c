#include<stdio.h>
void main()
{ int n, i = 1, sum = 0;
  printf("Enter range: ");
  scanf("%d", &n);
  while(i <= n)
  {
  	if((i%5 == 0) || (i%3 == 0))
  	{
  		sum += i;
    }
    i++;
    
}
  printf("sum of all the multiples of 3 and 5 is : %d", sum);
}  
