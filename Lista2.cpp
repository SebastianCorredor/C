#include <stdio.h>
#include <math.h>
int main(){
	float comp=0,media=0,lrest=0,lrest2=0,lrest3=0;
	int n=0,c=0,savior=0;
	scanf("%d", &n);
	float numeros[n];
	for (int i=0 ; i<n ; i++){
		scanf("%f", &numeros[i]);
		c=c+1;
    }
	for (int i=0; i<c;i++){
		comp+=numeros[i];
		media=comp/c;
	}
	for (int i=0; i<c; i++){
		lrest=numeros[i]-media;
		lrest=pow(lrest,2);
		lrest2=lrest2+lrest;
		savior=c-1;
	}
	for (int i=0; i<c; i++){
		lrest3=lrest2/savior;
		lrest3=sqrt(lrest3);
	}
	printf("%f\t", lrest3);	
	return 0;
}

