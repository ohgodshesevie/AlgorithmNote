#include <cstdio>
#include <cstring>
#include <math.h>

int transfer(char str[20], int D){
	int len = strlen(str); //循环次数
	int count=0; //整数D出现的次数 
	int P=0;
//	printf("%d\n", D);
	for(int i=0; i<len; i++){
		if((str[i]-'0')==D) count++;
	}
//	printf("%d\n", count);
	for(int i=count-1; i>=0; i--){
		P = P + D*pow(10,i);
	}
//	printf("%d\n", P);
	return P;	
} 

int main(){
	char A[20], B[20];
	int Da, Db, Pa, Pb;
	scanf("%s %d %s %d", &A, &Da, &B, &Db);
	Pa = transfer(A, Da);
	Pb = transfer(B, Db);
	int sum = Pa+Pb;
	printf("%d", sum);	
	
	return 0;
}
