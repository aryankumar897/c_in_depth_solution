/*E15.5*/
#include<stdio.h>
int main(void)
{
	int i,sum=0;
	for(i=0; i<5; i++)
	{
		int k=10;
		sum = sum + k++;
	}
	printf("sum=%d\n",sum);
	return 0;
}