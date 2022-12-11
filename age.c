#include <stdio.h>

int age;
int main() {
	printf("Enter the age of the chef\n");
	scanf("%d"&age);
	if(age<18 || age>50)
		printf("allowed");
	else
		printf("not allowed");
}