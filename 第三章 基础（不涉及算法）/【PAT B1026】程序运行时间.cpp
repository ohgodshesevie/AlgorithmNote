#include <cstdio>
#include <cstring> 
#include <time.h>
#include <math.h>

int main(){
	int C1, C2, h, min, s;
	scanf ("%d %d", &C1, &C2);
	while(C2>C1){
		int temp = (C2-C1)%100;
//		printf("%d", temp);
		s = (C2-C1)/100;
		if(temp>=50) s++; 
		printf("%d\n", s);
		h = s/3600;
		min = (s-h*3600)/60;
		s = s-h*3600-min*60;
		
		printf("%02d:%02d:%02d", h, min, s); //”√0≤π≥‰¡ΩŒª 
		break;
	}
	
	return 0;
}
