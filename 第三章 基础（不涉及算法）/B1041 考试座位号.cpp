#include <cstdio>
#define max 1010
typedef long long ll;

struct studentinfo{
	ll id;
	int seatnum;
	}testnum[max];
int main(){
	int N;  //录入人数 
	ll id;
	int testseat, seat;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%lld %d %d", &id, &testseat, &seat);
		testnum[testseat].id = id;
		testnum[testseat].seatnum = seat;
	};
	
	//开始输入查询 
	int M;  //待查test人数 
	int checktest;
	scanf("%d", &M);
	for(int i=0; i<M; i++) {
		scanf("%d", &checktest);
		printf("%lld %d", testnum[checktest].id, testnum[checktest].seatnum);
		if(i!=M-1) printf("\n");
	};
	return 0;
	
		
}
