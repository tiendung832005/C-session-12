#include<stdio.h>
void printToterminal(){
	printf("Xin chao ban\n");
	
}
void sum10and20(){
	printf("Tong cua 10 va 20 = %d\n", 10 + 20);
}
void sum(int a,int b){
	printf("Tong cua a va b = %d\n",a + b);
}




int main(){
	sum(1,2);
	sum(2,5);
	
	printToterminal();
	sum10and20();
	
	
	
}
