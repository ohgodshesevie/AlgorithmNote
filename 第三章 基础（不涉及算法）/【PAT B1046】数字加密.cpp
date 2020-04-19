#include <cstdio>
#include <cstring>

//char list[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "J", "Q", "K"};

int main(){
	char A[110], B[110];
	scanf("%s %s", &A, &B);
	int len1 = strlen(A);
	int len2 = strlen(B);
	
	int b[110];
	int start=0;
	if(len1 < len2){
		for(int i=0; i<len2-len1; i++){
			b[i] = B[i] - '0';
			printf("%d", b[i]);
			start = i;
		} 
	}
	
	for(int i=len2-1; i>start; i-=2){  //进入加密运算 
	b[i] = (A[i-start]-'0'+B[i]-'0')%13;  //奇数位 
	b[i-1] = B[i+1] - A[i+1];
	if(b[i-1]<0)  b[i-1]+=10;
	}
	
	for(int i=0; i<len2; i++)	printf("%d", b[i]);	
	
	return 0;
}
