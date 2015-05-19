#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L 100

char Res[L]={0};
	
//public

int division(char* A, char* B,char* C);
int subtraction(char* A, char* B,char* C);

//private
void strrev(char* X);
int isStrNumeric(char* X);

int main()
{
	char A[]="1234";
	char B[]="12345678900";
	char D[]=strrev(B);
	char C[L];
	division(A,B);
	//printf("%ld\n", division(1111111111,222222222));

	return 0;
}

int division(char* A, char* B,char* C)
{	
	strrev(A);
	strrev(B);
	//now we will work with reverced strings - it will be useful for our math operations 
	int lengthResult=0;
	long Res=0;
	int lengthA=(int)strlen(A), lengthB=(int)strlen(B);
	printf("a = %s [%d], b = %s [%d]\n",A,lengthA,B,lengthB); 
	

	return lengthResult;
}

int subtraction(char* A, char* B,char* C)
{
	strrev(A);
	strrev(B);
	//now we will work with reverced strings - it will be useful for our math operations 
	int lengthA=(int)strlen(A), lengthB=(int)strlen(B);
	for (int i = 0; i < lengthB; ++i)	{
		

	}		 

}

//we need this to compare values in appropriate positions 
void strrev(char* X)
{
	int len=(int)strlen(X);
	for (int i = 0; i < len/2; ++i)
	{
		tmp=X[i];
		X[i]=X[len-i-1];
		X[len-i-1]=tmp;
	}

}

int isStrNumeric(char* X)
{
	int i=0;
	while (i<(int)strlen(X)){
		if ((X[i]<'0') || (X[i]>'9')) return 1;
	}
	return 0;
}