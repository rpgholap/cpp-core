//============================================================================
// Name        : main.cpp
// Author      : shil
//============================================================================

// fstream -> input, output classes
// ifstream -> input
// ofstream -> output

#include <fstream>
#include <iostream>
using namespace std;

//typedef
typedef class StudentAttendanceReport{
public:
	int rollNo;
	string name;
	//mutable keyword
	mutable int attendanceCount = 0;		//to make this variable mutable, which can change in const member function also

	const StudentAttendanceReport& joined_for_class() const {
		cout << "Roll No: " << rollNo << " "  << "Name: " << name << " " << "is joined." << endl;
		return *this;
	}

	//const member function
	const StudentAttendanceReport& camera_on() const {
		attendanceCount++;
		cout << rollNo << " cam ON." << endl;
		return *this;
	}

	int getAttedanceCount() const{
		return attendanceCount;
	}

} SAR; //changed with typedef

//logger class for file logs
class Logger{
	ofstream out; // write file object created
public:

	//opened the file
	Logger(){
		out.open("attendance_log.txt");
	}

	// member function having bussiness logic
	void log(string msg){
		out << msg << endl;
	}

	// close the file
	~ Logger(){
		out.close();
	}
};


int main() {
	SAR s1;
	Logger logger;

	s1.rollNo = 100;
	s1.name = "shil";

	logger.log("Attendance Report:");
	for(int i=1;i<=50;i++){
		if(i % 2 == 0){
			logger.log("Camera OFF!");
			s1.joined_for_class();
		}
		else{
			logger.log("Camera ON.");
			s1.joined_for_class().camera_on();
		}
	}
	logger.log("Attendance Count:" + to_string(s1.getAttedanceCount()));
	cout << "Attendace Count: " << s1.getAttedanceCount() << endl; // attendance count
	return 0;
}

int main1(){

	ofstream out;

	out.open("demo.txt");

	out << "Hi this is me!" << endl;
	out << "How are you today?" << endl;

	out.close(); //releasing the resource

	// for reading the file content
	ifstream in;
	string line;

	in.open("demo.txt");

	cout << "File content : " << endl;
	while(getline(in,line)){
		cout << line << endl;
	}
	in.close();

	return 0;
}
