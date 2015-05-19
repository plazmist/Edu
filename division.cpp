#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L 100

char Res[L]={0};
	
//public
int division(char* A, char* B,char* C);
int subtraction(char* A, char* B,char* C);

//private
char* strrev(char* X);
int isStrNumeric(char* X);
void toIntValues(char* X);
void toCharValues(char* X);	

int main()
{
	char A[]="111222333399999";
	char B[]="1234";
	//printf("B = %s  revB = %s\n", B,B);
	//printf("B = %s  revB = %s\n", B, strrev(B));
	
	char D[20];
	char C[L];
	subtraction(A,B,C);
	//division(A,B,C);
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
	int lengthA=(int)strlen(A), lengthB=(int)strlen(B);

	printf("Input: %s - %s\n", A,B);
	strrev(A);
	toIntValues(A);
	strrev(B);
	toIntValues(B);

	//now we will work with reverced strings - it will be useful for our math operations 
	char carry=0;
	for (int i = 0; i < lengthB; ++i)	{
		A[i]=A[i]-B[i]-carry;
		carry=0;
		if (A[i] < 0) {
			A[i]+=10;
			carry=1;
		}
	}		 

	strrev(A);
	toCharValues(A);
	strrev(B);
	toCharValues(B);
	printf("\nOut  : %s - %s", A,B);
}

//we need this to compare values in appropriate positions 
char* strrev(char* X)
{
	char tmp;
	int len=(int)strlen(X);
	for (int i = 0; i < len/2; ++i)
	{
		tmp=X[i];
		X[i]=X[len-i-1];
		X[len-i-1]=tmp;
	}
	//printf(" in strrev = %s\n", X);
	return X;
}

int isStrNumeric(char* X)
{
	int i=0;
	while (i<(int)strlen(X)){
		if ((X[i]<'0') || (X[i]>'9')) return 1;
	}
	return 0;
}

void toIntValues(char* X){
	printf("In Int values we have get: %s[%d] = ",X, (int)strlen(X));
	for (int i = 0; i < (int)strlen(X); ++i){
		X[i]-=48;
		printf("%d", X[i]);
	}
	printf("\n");
}

void toCharValues(char* X){
 for (int i = 0; i < (int)strlen(X); ++i)
			X[i]+=48;

}
