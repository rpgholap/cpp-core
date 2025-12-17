/*
 * main.cpp
 *
 *  Created on: 02-Dec-2025
 *      Author: Shilbhushan
 */

#include <cstdio>

int main(){

	// you pointer size is not dependent on datatype, it is depends on your system architecture/compiler arch

	int num1 = 10;
	char c = 'a';

	char *cptr = &c;

	int *ptr = &num1;

	printf("%d \n", sizeof(num1));
	printf("%d \n", sizeof(ptr));

	printf("%d \n", sizeof(c));
	printf("%d \n", sizeof(cptr));


	return 0;
}





int main9(){

	int num1 = 10;

//	int *ptrNum const = &num1;  //syntax error -> not correct

	//Both are same and valid
	int const *const ptrNum = &num1;  // valid
//	const int *const ptrNum = &num1;	 // valid

	printf("%d \n", *ptrNum);

	return 0;
}







int main8(){

	int num1 = 10;  //non constant variable

	//Both are same and valid
//	int const *const ptrNum = &num1;  // valid
	const int *const ptrNum = &num1;  // const pointer variable with const data access

//	*ptrNum = 20;  //not valid

	int num2 = 20;

//	ptrNum = &num2;   // not valid
	num1 = 20;	// normal assignment for non constant variable

	printf("%d \n", *ptrNum);

	return 0;
}







int main7(){

//	int num1 = 10;

//	const int const *ptrNum = &num1; //not valid -> duplicate const

//	printf("%d \n", *ptrNum);

	return 0;
}




int main6(){

	int num1 = 10; //non constant variable

	int *const ptrNum = &num1;

	int num2 = 30;  // non constant variable

	*ptrNum = 20;  // valid

//	ptrNum = &num2;  // ptrNum -> cannot point to another address -> it constant

	printf("%d \n", *ptrNum);

	return 0;
}










int main5(){

	const int num1 = 10; // constant local variable

	//Both are identical
	int const *ptrNum1 = &num1;  // constant ptr variable
//	const int *ptrNum1 = &num1;

	int num2 = 20;

	ptrNum1 = &num2; //

//	*ptrNum1 = 20; // data cannnot be changed //error: assignment of read-only location '* ptrNum1'

	printf("%d \n", *ptrNum1);

	return 0;
}

int main4(){

	const int num1 = 10; // constant local variable

//	int *ptrNum1 = &num1; // pointer to num1  //not valid

	const int *ptrNum1 = &num1; // data cannot be changed, but can point to new address.

	int const *prtNum1 = &num1;

	int num2 = 20;

	ptrNum1 = &num2; // valid

//	*ptrNum1 = 20; // not valid

	printf("%d \n", *ptrNum1);

	return 0;
}

int main3(){

	const int num1 = 10; // constant local variable

//	num1 = 20; //error: assignment of read-only variable 'num1'

	printf("%d \n", num1);

	return 0;
}








int main2(){
//	int num1 = 10;

//	int *ptrNum1 = &num1; // all good

//	int *ptrNum1;  // wild pointer -> produces undefined behaviour

//	int *ptrNum1 = NULL; // NULL -> it represents int 0, NULL is a macro

//	int *ptrNum1 = nullptr;

//	printf("value of ptrNum1 : %d", ptrNum1);
	return 0;
}






//pointers ka basics
int main1(){

	int num1 = 10; //initiliazation of variable

	int *ptrNum1 = &num1;  // initialization of pointer variable

	int num2 = 20; //2000

	printf("Num1 Value: %d \n", num1);  // num ka value print
	printf("ptrNum1 Value via ptr: %p \n", ptrNum1); // ptrnNum1 ka value print i.e. address of another variable
	printf("Num1 value via ptr : %d \n", *ptrNum1);  // value of num1 via dereferencing from ptr

//	*ptrNum1 = &num2;  // not valid

	ptrNum1 = &num2; // reassign the address of num2

	printf("Num2 Value: %d \n", num2);  // num ka value print
	printf("ptrNum1 value via ptr: %p \n", ptrNum1);
	printf("Num2 value via ptr : %d \n", *ptrNum1);

	*ptrNum1 = 30; // changing the value of variable via dereferencing

	printf("Num2 Value: %d \n", num2);



	return 0;
}



