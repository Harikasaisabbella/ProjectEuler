#include<stdio.h>
void main()
{
	long long temp, max_count = 0, result;
	int a, b, current_count;
	scanf("%d%d", &a,  &b);
	while(a <= b)
	{
		current_count = 0;
		temp = a;
		while(temp > 1)
		{
			if(temp%2 == 0)
			{
				temp = temp/2;
			}
			else
			{
				temp = 3*temp+1;
			}
			current_count++;
		}
		if(current_count > max_count)
		{
			max_count = current_count;
			result = a;
		}
		a++;
	}
	printf("\n%lld forms the largest collatz sequence with %lld terms", result, max_count);
}
