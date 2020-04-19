#include<stdio.h>

int main(){
	int A, B, D;
	printf("请输入A，B，D（进制数）：\n");
	scanf("%d%d%d",&A,&B,&D);
	int sum = A+B;
	int ans[30]={};
	int n=0;
	
	do{
		ans[n++] = sum%D;
		sum/=D;
	}while(sum!=0);
	
	for(int i=n-1; i>=0; i--){
		printf("%d", ans[i]);
	}
	return 0;
	
}
