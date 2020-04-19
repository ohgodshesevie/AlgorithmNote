#include <cstdio>
#include <math.h>

int main(){
	int N, x, sum; //x为沙漏底边符号个数
	char c;
	scanf("%d %c", &N, &c); 
	x = sqrt(2*(N+1))-1;
	if(x%2==0) x-=1;
	
//	printf("%d", x);
	for(int i=0; i<=round(x/2); i++){ //行数 
		for(int k=0; k<i; k++){  //每行空格数 
			printf(" ");
		}
		for(int j=0; j<x-i*2; j++){
			printf("%c", c);
		} 
		printf("\n");
	}
	for(int i=round(x/2)+1; i<x; i++){  
		for(int k=1; k<x-i; k++){
			printf(" ");
		}
		for(int j=1; j<=(i-round(x/2))*2+1; j++){
			printf("%c", c); 
		}
		printf("\n");
		
	}
	
	int use = pow((x+1),2)/2 - 1;
	printf("%d", N-use);
	
	return 0; 
}
 
