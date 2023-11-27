#include<stdio.h>
void math(int a, int b, int c){
	printf("Cap so thu nhat la: \n");
	printf("%d*%d=%d\n",a,b,a*b);
	if(a%b==0){
		printf("%d/%d=%d\n",a,b,a%b);
	}
	else{
		printf("%d khong chia het cho %d\n",b,a);
	}
	printf("Cap so thu 2 la: \n");
	printf("%d*%d=%d\n",b,c,b*c);
	if(b%c==0){
		printf("%d/%d=%d\n",b,c,b/c);
	}
	else{
		printf("%d khong chia het cho %d\n",c,b);
		
	}
	printf("Cap so thu 3 la: \n");
	printf("%d*%d=%d\n",a,c,a*c);
	if(a%c==0){
		printf("%d/%d=%d\n",a,c,a/c);
	}
	else {
		printf("%d khong chia het cho %d\n",c,a);
	}
	
	
}
int main(){
	int a,b,c;
	printf("Moi ban nhap vao 3 so a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	math(a,b,c);
}
