#include <cstdio> 
#include <math.h>

int main(){
	double N, row;
	char c;
	scanf("%lf %c", &N, &c);
	row = round(N/2);  //���� 
//	printf("%d\n", (int)row); 
	
	for(int j=1; j<=row; j+=1){  //��ǰ���� 
		if(j==1){  //�ڵ�һ��
			for(int i=0; i<N; i++){
				printf("%c", c);
			}
			continue;
		}
		if(j==row){  //�ڵ�һ��
			printf("\n");
			for(int i=0; i<N; i++){
				printf("%c", c);
			}
			break;
		}
		printf("\n%c", c);
		for(int i=0; i<(int)N-2; i++){
			printf(" ");
		}
		printf("%c", c);		
		
	}	 
	
	

	return 0;
}
