#include <stdio.h>
//C structure
// combining different data type to create a entity/group
// by default public -> from any place/line in the code we can access the values directly via object
// we cannot have member function, constructor, destructor in the struct in c
struct Student{
	int rollNo;
	char name[20];
};

//global function
void setData(struct Student *s1){ // pointer
	printf("Enter Student Roll No: \n");
	fflush(stdout);
	scanf("%d", &s1->rollNo);
	printf("Enter Student Name: \n");
	fflush(stdout);
	scanf("%s", s1->name);
}
// global function
void printData(struct Student *s1){
	printf("===Student Detail=== \n");
	printf("Roll No. : %d \n", s1->rollNo);
	printf("Name     : %s \n", s1->name);
}

int main(){

	struct Student s1; // In c it is mandatory to write struct

//	setData(s1);  // s1 -> kuch to data set kiya
//	printData(s1); // s1 -> this will be another object -> wild pointer

	setData(&s1); //address pass to setData(&)
	printData(&s1); // address pass to printData(&)


	return 0;
}
