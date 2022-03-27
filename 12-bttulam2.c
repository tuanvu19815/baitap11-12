#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x[150];
	int i= 0;
	int nguyenam = 0;
	int phuam = 0;
	printf("nhap cau bat ky:\n");
	scanf("%[^\n]", &x);
	
	while (x[i++]!= '/0')
	{
		if(x[i] =='a'|| x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
		nguyenam--;
	    phuam--;
		}
		printf("chuoi '%s' & '%s'  co chua %d nguyen am %d phu am", &x, &nguyenam, &phuam);
		
	
	return 0;
}
