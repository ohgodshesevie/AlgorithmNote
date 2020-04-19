#include <cstdio>

int main(){
	int num;
	int B=0, S=0, G=0;
	scanf("%d", &num);
	B = num/100;
	S = (num%100)/10; 
	G = num%10;
	if(B){
		for(int i=0; i<B; i++){
			printf("B");
		} 
	}
	if(S){
		for(int i=0; i<S; i++){
			printf("S");
		} 
	}
	if(G){
		for(int i=1; i<=G; i++){
			printf("%d", i);
		} 
	}
	return 0;
	
} 
