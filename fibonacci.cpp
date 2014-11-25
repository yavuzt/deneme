#include<stdio.h>

int fibonacci(int n) {
	int A[n];
	int F1, F2, F;
	F1 = 0; F2 =1;
for (int i = 2; i <= n;i++ ){

	F = F1 + F2;
	F1 = F2;
	F2 = F;
}

	return F;
	
}

int main(){
int n ;
printf("n deðerini giriniz :");
scanf("%d", &n);
int A[n];
int r = fibonacci (n);
//printf("%d", r);	

for (int i = 2; i <= n;i++ ){
	A[i] = fibonacci (i);
	printf("%d  ",A[i]);
}
return 0;	
}
