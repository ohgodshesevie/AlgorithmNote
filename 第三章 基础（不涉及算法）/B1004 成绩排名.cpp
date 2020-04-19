#include <cstdio>

struct stuinfo{
	char name[15];
	char id[15];
	int score[5];
}maxscore, minscore;



int main(){
	int n;
	char name[15], id[15];
	int score;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s %s %d", &name, &id, &score);
		stuinfo.id = id;
		stuinfo.name = name;
	}
} 
