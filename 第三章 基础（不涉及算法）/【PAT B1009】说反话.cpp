#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char str[80];
	printf("Enter:\n");
	cin.getline(str, 80);  //！！！！！PAT编译器不支持gtes，用C++中的getline替换 
	int len = strlen(str), row = 0, col = 0;

	char slice[80][80];
	for(int i=0; i<len; i++){  //对str切片 
		if(str[i] != ' '){
			slice[row][col++] = str[i];
		}else{
			row++;
			col = 0;
		}
	}
	
	for(int i=row; i>=0; i--){  //读出 
		printf("%s", slice[i]);
		if(i>0) printf(" ");
	}
	
	return 0;
} 
