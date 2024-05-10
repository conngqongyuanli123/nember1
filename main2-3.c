#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d",&a);
	if(3<=a&a<=10){
	printf("%d\n",a*a*a*a+(a+3)*(a+3)*(a+3)*(a+3)+(a+6)*(a+6)*(a+6)*(a+6)	+(a+9)*(a+9)*(a+9)*(a+9)+(a+12)*(a+12)*(a+12)*(a+12)+(a+15)*(a+15)*(a+15)*(a+15));
	}
	else{printf("error");}
	
	return 0;
}
