#include<stdio.h>
void greeting(char name);
int main(){
	char name[]="Alia Bhatt";
	greeting(name);
	// changes
}		
void greeting(char name[])
{
	printf("Hi there, %s",name);
}
