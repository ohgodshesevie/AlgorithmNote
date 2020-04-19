#include <cstdio>
#include <cstring>

int main(){
	int N;
	scanf("%d", &N);
	int A1[110], A2[110], B1[110], B2[110];
	int count1=0, count2=0;
	for(int i=0; i<N; i++){
		scanf("%d %d %d %d", &A1[i], &A2[i], &B1[i], &B2[i]);
//		printf("%d %d %d %d\n", A1[i], A2[i], B1[i], B2[i]);
	}
	for(int i=0; i<N; i++){
		if(A1[i]+B1[i]==A2[i] && A1[i]+B1[i]!=B2[i]){
			count2++;
			continue;
		}else if(A1[i]+B1[i]==B2[i] && A1[i]+B1[i]!=A2[i]){
			count1++; 
			continue;
		} 
	}
	
	printf("%d %d", count1, count2);
	return 0;
	
} 
