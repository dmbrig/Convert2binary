#include<stdio.h>
int main() 
{
	
	int a;

	printf("Enter input\n");
	scanf("%d", &a);
	// quotient is
	//int c = a / 2;
	// remainder is
	//int d = a % 2;
	//printf("The quotient is %d\n", c);
	//printf("The remainder is %d\n", d);
	int b = a;

	/*
	We need to know the size of the array which will return the binary
	number. So we'll have to run through once to get the length, and a second time
	to get the bin number
	*/
	int i = 0;
	while(a > 0){
	  a = a/2;
	  i++;
	}
	//printf("The length of the number is %d\n", i);	

	
	int j = 0;
	int binary[i];
	int d;
	while (b > 0) {
		d = b % 2;
		printf("%d", d);
		binary[j] = d;
		b = b / 2;
		j++;
	}
	return 0;
}