#include <cstdio>
#include <cstring>
#include <algorithm>
#define maxn 100010
using namespace std;

struct student{
	char id[10];
	int de, cai, sum; //总分 
	int flag; //所属等级1~5 
}stu[maxn], temp;

bool cmp(student a, student b){
	if(a.flag != b.flag) return a.flag < b.flag; //类别小的排在前
	else if(a.sum != b.sum) return a.sum > b.sum; //类别相同，总分大的在前 
	else if(a.de != b.de) return a.de > b.de; //类别相同且总分相同，德分大的在前面 
	else return	strcmp(a.id, b.id)<0;
}

int main(){
	int N, L, H, num=0;
	scanf("%d %d %d", &N, &L, &H);
	//分类 
	while(N--){
		scanf("%s%d%d", temp.id, &temp.de, &temp.cai);
		if(temp.de>=L&&temp.cai>=L){
			temp.sum=temp.de+temp.cai;
			if(temp.de>=H&&temp.cai>=H) temp.flag=1;
			else if(temp.de>=H) temp.flag=2;
			else if(temp.de>=temp.cai) temp.flag=3;
			else temp.flag=4;	
			stu[num++]=temp;
			//temp=null;
		}
	}
	sort(stu, stu+num, cmp);
	printf("%d\n", num);
	for(int i=0; i<num; i++){
		if(i<num-1) printf("%s %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
		else printf("%s %d %d", stu[i].id, stu[i].de, stu[i].cai);
	}
	return 0;	
}
