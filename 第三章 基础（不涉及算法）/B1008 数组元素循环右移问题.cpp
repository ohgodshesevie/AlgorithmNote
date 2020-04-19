#include <cstdio>
#include <cstring>

void exchange(int a[], int len){
	int temp;
	temp = a[len-1];
	for(int i=len-1; i>=0; i--){
		a[i] = a[i-1];
	}
	a[0]=temp;
}

int main(){
	int N, M;
	int a[110];
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<M; i++){
		exchange(a, N);
	}
//	printf("%d\n", a[N-1]);
	
	for(int i=0; i<=N-1; i++){
		printf("%d", a[i]);
		if(i!=N-1) printf(" ");
	}
	
	return 0;
	
} 
