#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char str[80];
	printf("Enter:\n");
	cin.getline(str, 80);  //����������PAT��������֧��gtes����C++�е�getline�滻 
	int len = strlen(str), row = 0, col = 0;

	char slice[80][80];
	for(int i=0; i<len; i++){  //��str��Ƭ 
		if(str[i] != ' '){
			slice[row][col++] = str[i];
		}else{
			row++;
			col = 0;
		}
	}
	
	for(int i=row; i>=0; i--){  //���� 
		printf("%s", slice[i]);
		if(i>0) printf(" ");
	}
	
	return 0;
} 
