#include <stdio.h>
#include <string.h>

struct peopleinfo{
	char name[10];
	int year, month, day;
}oldest, youngest;

int main(){
	int N;
	scanf("%d", &N);
	char name[10];
	int yy, mm, dd;
	int sum=0;
	
	oldest.year = 2014;
	oldest.month = 9;
	oldest.day = 6;
	youngest.year = 1814;
	youngest.month = 9;
	youngest.day = 6;
	for(int i=0; i<N; i++){
		scanf("%s %d/%d/%d", &name, &yy, &mm, &dd);
		//printf("\n%s\n", name);
		if(yy>2014 || yy<1814) continue; //错误信息 
		else if(yy==2014){ 
			if(mm>9) continue; //错误信息 
			else if(mm=9){
				if(dd>6) continue; //错误信息 
			}
		}
		else if(yy==1814){
			if(mm<9) continue;
			else if(mm==9){
				if(dd<6) continue;
			}
		}

		sum++;  //有效数据
		//printf("该信息有效！sum = %d\n%s %d %d %d", sum, name, yy, mm, dd); 
		
		if(yy<oldest.year){
			strcpy(oldest.name, name); 
			continue;
		} 
		else if(yy==oldest.year){
			if(mm<oldest.month){
				strcpy(oldest.name, name); 
				continue;
			}
			else if(mm==oldest.month){
				if(dd<oldest.day){
					strcpy(oldest.name, name); 
					continue;
				}
			}
		}
		
	
		else if(yy>youngest.year) {
			strcpy(youngest.name, name); 
			continue;
		}
		else if(yy==youngest.year){
			if(mm>youngest.month) {
				strcpy(youngest.name, name);
				continue;
			}
			else if(mm==youngest.month){
				if(dd>youngest.day){
					strcpy(youngest.name, name); 
					continue;
				}
			}
		}
	
	}

	printf("%d %s", sum, youngest.name);
	return 0;

}


