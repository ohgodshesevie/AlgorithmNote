#include <cstdio>
#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char str1[90], str2[90];
	bool hashTable[128] = {false};
	cin.getline(str1, 90);
	cin.getline(str2, 90);
	int len1 = strlen(str1);
	int len2 = strlen(str2)	;
	for(int i=0; i<len1; i++){
		hashTable[str1[i]] = true;
	}
	for(int i=0; i<len2; i++){
		hashTable[str2[i]] = false;
	}
	char printer[80];
	int num=0; //��Ҫ��ӡ����ĸ���� 
	bool hash2[128] = {false};
	//ȫ����ɴ�д��ĸ 
	for(int i=0; i<len1; i++){
		if(hashTable[str1[i]]==true) {
//			printf("%c", str1[i]);
			if('a'<=str1[i] && str1[i]<='z' ){ //��ĸΪСдʱ 
				if(hash2[str1[i] - 32] == true) continue; //�������ĸ�Ĵ�д�Ѿ����� 
				printer[num++] = str1[i]-32;
				hash2[str1[i] - 32] = true;
			} 
			else if(hash2[str1[i]] == false){ 
				printer[num++] = str1[i];
				hash2[str1[i]] = true;	
			} 
			else continue;
		}
	}
//	printf("\n");
	for(int i=0; i<num; i++){
		printf("%c", printer[i]);
	} 
	return 0;
}
