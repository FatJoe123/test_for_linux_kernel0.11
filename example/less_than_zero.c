#include<stdio.h>
#include<stdlib.h>
void less_than_zero(float,int a[]);

int main(){
	int i;
	float num= 0.0;
	int a[20] = {};
	printf("input a num:");
	scanf("%f",&num);
	less_than_zero(num,a);
	printf("0.");
	for(i = 0; i < 20; i++)
	{
		printf("%d",a[i]);	
	}
	printf("\n");
	return 0;
}

void less_than_zero(float num,int* a)
{
	float tmp = num;
	int i = 0;
	while(tmp != 0 && i<20)
	{
		tmp = tmp*2;	
		if(tmp < 1)
		{
			a[i] = 0;
		}
		else
		{	
			if(tmp == 1)
			{
				a[i] = 1;
				tmp = 0;
			}
			else
			{
				tmp = tmp -1;
				a[i] = 1;
			}
		i++;
		}
	}
}
