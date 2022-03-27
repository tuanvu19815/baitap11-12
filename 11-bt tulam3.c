#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nem[5][4], thit[4];
	int i,j;
	
	for (i=0; i<5; i++)
    { printf("nhap so bat ky:");
	scanf("%s", &nem[i]);
	}
	for (i=0; i<4; i++){
	  for (j=i+1; j<5; j++){
	  	if (strcmp(nem[i], nem[j])<0){
		    strcpy(thit, nem[i]);
			strcpy(nem[i], nem[j]);
			strcpy(nem[j],thit);
			}		  
		  	}
			  }
			  for(i=0; i<5; i++){
			  	printf("%s\n", nem[i] );
			  
}
return 0;
}

