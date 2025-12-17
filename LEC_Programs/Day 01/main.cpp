#include <cstdio>

/*
return_type function_name(){
	//code
}
*/

//function declaration -> Function Prototype/Prototyping
//int add(int a, int b);


int main(){

	int num = 10;

	int *ptr = &num; //reference


	*ptr = 20; //valid

	printf("num value: %d \n", num);
	printf("num address: %p\n", &num);

	printf("====PTR Values==== \n");
	printf("num value from ptr: %d\n", *ptr);  //dereference
	printf("num address from ptr: %p\n", ptr);
	printf("address of ptr: %p\n", &ptr);


//	int* prt;
//
//	int * prt;
	return 0;
}











int main1(){
	int a; //declaration
	int b = 10; // definition + declaration or initilization

	a = 20;  // assignment

//	int result = add(a,b); // function call

//	printf("Sum: %d", result);

	return 0;
}

//function definition
//int add(int a, int b){ //function parameters
//	return a + b;
//}


// function parameters -> it will be there at function definition
// function arguments -> it will be there at function call

// have a return type and parameters
// have a return type and no parameters
// not have return type and have parameters
// not have return type and also parameters



