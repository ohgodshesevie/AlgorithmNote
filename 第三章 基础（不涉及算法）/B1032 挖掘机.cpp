#include<cstdio>
#define max 100000

int main(){
	int N;
	scanf("%d", &N);
	int school[max] = {0};
	int id, score;
	for(int i=0; i<N; i++){
		scanf("%d %d", &id, &score);
		school[id] += score;
	}
	int max_id=0, max_score=0;
	for(int i=1; i<max; i++){
		if(school[i] > max_score){
			max_id = i;
			max_score = school[i];
		}
	}

	printf("%d %d", max_id, max_score);
	return 0;
}
