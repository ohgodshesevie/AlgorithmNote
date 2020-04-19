#include <cstdio>

int main(){
	int G1, S1, K1, G2, S2, K2, G3, S3, K3;
	scanf("%d.%d.%d", &G1, &S1, &K1);
	scanf("%d.%d.%d", &G2, &S2, &K2);
	int sum1, sum2, temp;
	sum1 = G1*493+S1*29+K1;
	sum2 = G2*493+S2*29+K2;
	temp = sum2-sum1;
	if(temp>=0){
		printf("%d.%d.%d", temp/493, temp%493/29, temp%493%29);
	}else{
		printf("-%d.%d.%d", -temp/493, -temp%493/29, -temp%493%29);
	}	
	
	return 0;
	
} 
