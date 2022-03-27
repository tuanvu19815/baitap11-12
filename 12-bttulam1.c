#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,num,max,min;
	printf("nhap vao so n =");
	scanf("%d", &a);
	for (b=0; b<=a; b++){
		 printf("nhap so bat ky :");
		 scanf("%d", &num);
		 if(b==0){
		 	max=num;
		 	min=num;
		 	}
		 	if(b>0 && num>max){
		 		max=num;}
		 	if (b>0 && num<min){
		 		min=num;}
		 		}
		 		printf("so lon nhat %d\n", max);
		 		printf("so nho nhat %d",min);
	return 0;
}
