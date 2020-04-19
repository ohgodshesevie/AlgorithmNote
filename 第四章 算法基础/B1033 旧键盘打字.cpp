/*hashTable[坏掉的键] = false
 
*/
#include <cstdio>
#include <cstring>
#include <iostream>
#define maxn 100010
using namespace std;

int main(){
	char str[128];
	bool hashTable[128] = {true}; //true为正常 
	//坏掉的键 = false
	cin.getline(str, 128);
	int len = strlen(str);
	for(int i=0; i<len; i++){
		hashTable[str[i]] = false;
	} 
	if(hashTable['+']==false){ //如果+为false，所有大写都为false 
		for(int i=35; i<=62; i++){
			hashTable[i] = false;
		}
	}
	for(int i=0; i<128; i++){
		if(hashTable[str[i]] == false) printf("%c", str[i]);
	}
	printf("\n");
/*	//开始输入
	cin.getline(str, maxn);
	len = strlen(str);
	for(int i=0; i<len; i++){
		if(hashTable[str[i]] != false) printf("%c", str[i]);
	} 
*/	
	return 0;
	
} 
