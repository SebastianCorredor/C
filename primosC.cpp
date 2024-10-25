#include<stdio.h>
int main(){
	int num,i,c=0;
	printf("ingrese numero:");
	scanf("%i",&num);
	for (i=1;i<=num;i++){
		if (num%i==0){
			c++;
		}
	}
	if (c>2){
		printf("Compuesto");
	}
	else{
		printf("Primo");
	}
	return 0;
}
	
	
