#include<stdio.h>

int main(){
	
	int n;
	

	do{
		printf ("Enter n (n>=2): ");
		scanf ("%d", &n);
		if (n<2){
			printf ("n must be >= 2, ");
		} 
	}while(n<2);
	

	printf ("Prime numbers up to %d: ", n);
	int a=2;
	while(a<=n){
		int primenumber=1;
		int b=2;
		while(b*b<=a){
			if(a%b==0){
				primenumber=0;
				break;
			}
			b++;
		}
		if (primenumber){
			printf("%d ", a);
		}
		a++;
	}
	
	return 0;
	
}
