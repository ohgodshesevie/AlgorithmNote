#include <cstdio>

int main(){
	char str[1000];
	scanf("%s", &str);
	int len = strlen(str);
	
	char a[10]={0};
	for(int i=0; i<len; i++){
		a[str[i] - '0']++;
	}
	
	for(int i=0; i<10; i++){
		if(a[i])  printf("%d:%d\n", i, a[i]);
	}
	return 0;
	
}
