#include<stdio.h>
int main(){
	int num,i,c=1;
	scanf("%i",&num);
	for (i=1;i<=num;i++){
		c=c*i;
	}
	printf("El factorial %i",c);
	return 0;
}

