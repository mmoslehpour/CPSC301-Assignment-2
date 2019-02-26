// person.cpp

#include <iostream>
using namespace std;
#include "person.h"

Person::Person() {
    
}


// last name
void Person::setLastName (string lname) {
	lastName = lname;
}

string Person::getLastName () {
	return lastName;
}

// first name
void Person::setFirstName (string fname) {
	firstName = fname;
}

string Person::getFirstName () {
	return firstName;
}

// hours worked
void Person::setHoursWorked (float hours) {
	hoursWorked = hours;
}

float Person::getHoursWorked () {
	return hoursWorked;
}

// pay rate
void Person::setPayRate (float rate) {
	payRate = rate;
}

float Person::getPayRate () {
	return payRate;
}

// full name
string Person::fullName() {
    return firstName + " " + lastName;
}

// total pay
float Person::totalPay() {
    return hoursWorked * payRate;
}



