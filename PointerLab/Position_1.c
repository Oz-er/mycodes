#include<stdio.h>


int main(){
	int m,n;
	scanf("%d %d",&m,&n);

	int position;
	scanf("%d",&position);

	printf("%d %d",(position-1)/n,(position-1)%m);
}
