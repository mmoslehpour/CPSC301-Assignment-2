// pay.cpp

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "person.cpp"
using namespace std;

// declaring readData/ writeData
void readData(vector<Person> &emp, int &n); 
void writeData(vector<Person> emp, int n);


int main() {
	int n = 0;
    // declaring variable and size
	vector<Person> employees;
    // calling readData/ writeData
	readData (employees, n);
	writeData (employees, n);

	return 0;
}

// reading data from input.txt
void readData (vector<Person> &emp, int &n) {

	string fname, lname;
	double hoursWorked, payRate;

	ifstream file;
	file.open("input.txt");
    //if fail to open file
	if (!file) {
		cout << "Unable to open file. " << endl ;
		exit(1);
	}
    // reading all data in file
	while (file >> fname >> lname >> hoursWorked >> payRate) {
		Person P;
		P.setFirstName (fname);
		P.setLastName (lname);
		P.setHoursWorked (hoursWorked);
		P.setPayRate (payRate);
		emp.__emplace_back(P);
		n++;
	}
	file.close();
}

// writing data in output.txt
void writeData (vector<Person> emp, int n) {

	ofstream file;
	file.open("output.txt");
	for (int i = 0; i < n; i++) {
		file << emp[i].fullName() <<" "<< emp[i].totalPay() << endl;
	}
	file.close();
}

