#include<stdio.h>
void math(int a, int b,int c){
	printf("Cap so thu nhat la:\n");
	printf("%d+%d=%d\n",a,b,a+b);
	if(a>b){
		printf("%d-%d=%d\n",a,b,a-b);
	}
	else{
		printf("%d-%d=%d\n",b,a,b-a);
	}
	printf("Cap so thu 2 la: \n");
	printf("%d+%d=%d\n",b,c,b+c);
	if(b>c){
		printf("%d-%d=%d\n",b,c,b-c);
	}
	else{
		printf("%d-%d=%d\n",c,b,c-b);
		
	}
	printf("Cap so thu 3 la: \n");
	printf("%d+%d=%d\n",a,c,a+c);
	if(a>c){
		printf("%d-%d=%d\n",a,c,a-c);
	}
	else{
		printf("%d-%d=%d\n",c,a,c-a);
		
	}
}
int main(){
	int a,b,c;
	printf("Moi ban nhap 3 so a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	math(a,b,c);	
}
