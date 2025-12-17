/*
 * main.cpp
 *
 *  Created on: 04-Dec-2025
 *      Author: Shilbhushan
 */

#include <iostream>

using namespace std;

namespace CDACMumbai{ // main namespace

	namespace PGDAC{ // nested namespace
		int totalStudent = 240;

		int getCount(){
			return totalStudent;
		}
	}

	namespace PGDBDA{ // nested namespace
		int totalStudent = 80;

		int getCount(){
			return totalStudent;
		}
	}
}

int main(){

	using namespace CDACMumbai::PGDAC;  // with using directive

//	cout << "PG-DAC Student : " << PGDAC::totalStudent << endl;
//	cout << "PG-DBDA Student : "<< PGDBDA::totalStudent << endl;
	cout << "PG-DAC Student via function : " << getCount() << endl;
	cout << "PG-DBDA Student via function : "<< getCount()<< endl;

	return 0;
}
