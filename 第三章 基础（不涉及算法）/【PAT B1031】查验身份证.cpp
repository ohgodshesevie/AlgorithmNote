#include <cstdio>
#include <cstring>
//权重列表 
int Z[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
//校验码列表 
char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

//判断前17位+验证校验码
char Weighted_Sum(char str[]){
	int n[17]; //取出前17位数 
	int sum=0;
	
	for(int i=0; i<17; i++){
		n[i] = str[i] - '0';
		if(n[i]>10)  return '0'; 
	}
	for(int i=0; i<17; i++){
		sum = sum + n[i]*Z[i]/100;
	} 
	return M[sum];
	
}

int main(){
	int N;
	scanf("%d", &N);
	
	char str[18], print[100];
	int a=0;
	char M;
	for(int i=0; i<N; i++){	
		scanf("%s", &str[i]);
		M = Weighted_Sum(str);
		if( M=='0' || str[17]!=M ){  
			print[a++] = str[i];  //前17位判断为错误
		}
	}
	if(!a){
		for(int i=0; i<a; i++)  printf("%s", print[i]);
	}
	else printf("All passed");
	return 0;
	
}

