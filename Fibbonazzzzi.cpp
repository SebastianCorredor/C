int fibonazzzi (int n){
	int x,y,i=0,total;
	x=1;
	y=1;
	for (int i=0; i<(n-3); i++){
		total=x+y;
		y=x;
		x=total;
	}
	return(total);
}
#include <stdio.h>
int main(){
	int cases=0;
	scanf("%i", &cases);
	if (cases==1){printf("1");}
	else{printf("%i", fibonazzzi(cases+cases));}
	return 0;
}
// si pone mas de 23 se va a romper, tocaria por long int, o poner long long int 
