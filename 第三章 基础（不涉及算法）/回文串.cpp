//回文串：正读反读都一样 

#include <stdio.h> 
#include<string.h>
#define MAX 255

int judge(char str[]){
	int len = strlen(str);
	
	for(int i=0; i<=len/2; i++){  
		if(str[i] != str[len-1-i])  //此处len要-1再-i 
			return 0; 
	}
	return 1;
}


int main(){
	char str[MAX];
	int ans;
	printf("Enter:\n");
	scanf("%s", &str);
	ans = judge(str);
	if(!ans)
		printf("NO");
	else printf("YES");
	return 0;
	
}
