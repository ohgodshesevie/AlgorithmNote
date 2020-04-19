#include<cstdio>
#include<cstring>

char pinyin[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main(){
	char str[100];
	scanf("%s", &str);
	int len = strlen(str);
	int ans=0;
	
	for(int i=0; i<len; i++){
		ans += str[i]-'0';
	}
	if(ans>=100){
		int B = ans/100;
		int S = ans/10%10;
		int G = ans%10;
//		printf("%d %d %d", B, S, G);
		printf("%s %s %s", pinyin[B], pinyin[S], pinyin[G]);
	}
	if(ans<100&&ans>=10){
		int S = ans/10%10;
		int G = ans%10;
//		printf("%d %d %d", B, S, G);
		printf("%s %s", pinyin[S], pinyin[G]);
	}
	if(ans<10){
		int G = ans%10;
//		printf("%d %d %d", B, S, G);
		printf("%s", pinyin[G]);
	}
	
	return 0;
	
} 
