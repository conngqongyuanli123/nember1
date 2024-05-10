#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	float dian(int x){
		if(x>400){
			return 1.15*(250+x-300);
		}
		if(x>=300&&x<=400){
			return (250+x-300);
		}
		if(x>=200&&x<300){
			return(160+0.9*(x-200));
		}
		if(x>=125&&x<200){
			return(0.8*x);}
		else{
			return 100;
		}	
		}
int main(int argc, char *argv[]) {
	float dian(int x);
	int x;	
	scanf("%d",&x);
	printf("%.2f\n",dian(x));
	return 0;
}
