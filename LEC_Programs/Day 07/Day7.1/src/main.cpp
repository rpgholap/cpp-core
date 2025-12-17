//============================================================================
// Name        : 1.cpp
// Author      : shil
//============================================================================

#include <iostream>
using namespace std;

class Matrix{
	int rows, cols;
	int **data;

public:

	Matrix(int r, int c) : rows(r), cols(c) {
		data = new int *[rows];

		for(int i=0;i<rows;i++){
			data[i] = new int[cols]; // coloumns
			for(int j=0;j<cols;j++){
				data[i][j] = 0;		//initialize with 0
			}
		}
	}

	//own copy constructor Matrix(Matrix &mat){}  // deep copy


	~ Matrix(){
		for(int i=0;i<rows;i++){
			delete[] data[i];
		}
		delete[] data;
	}

	void accept(){
		cout << "Enter Matrix : " <<endl;
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cin >> data[i][j];
			}
		}
	}

	void print(){
		cout << "=======The Matrix=======" << endl;
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}

};

int main() {
	Matrix m1(2,2);

	Matrix m2 = m1;		//copy constructor -> shallow copy

	m1.accept();
	m1.print();

	m2.print();

	return 0;
}
