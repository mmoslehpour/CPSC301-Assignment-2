// pay.cpp

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "person.h"
#include "person.cpp"
using namespace std;

// declaring readData/ writeData
void readData(Person employees[], int &n); // & pointer
void writeData(Person employees[], int n);


int main() {
    // declaring variable and size
	int n = 0;
	Person employees[20];
    // calling readData/ writeData
	readData (employees, n);
	writeData (employees, n);
}

// reading data from input.txt
void readData (Person employees[], int &n) {

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
		employees[n] = P;
		n++;
	}
	file.close();
}

// writing data in output.txt
void writeData (Person employees[], int n) {

	ofstream file;
	file.open("output.txt");
	for (int i = 0; i < n; i++) {
		file << employees[i].fullName() <<" "<< employees[i].totalPay() << endl;
	}
	file.close();
}

