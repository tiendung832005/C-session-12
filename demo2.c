#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b){
	int result = a+b;
	return result;
	
}
void printStudents(int students){
	printf("students = %d\n", students);
}
int main(){
	int students, girls=12, boys=9;
	students =sum(girls,boys);
	printStudents(students);
	return 0;
}
