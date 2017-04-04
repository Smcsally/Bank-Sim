#include <iostream>
#include <cstring>
#include <atlstr.h>
#include "Client.h"

using namespace std;

//make a Client with no name and duration and arrival time
Client::Client() {
	strcpy(name, "0");
	arrivalTime = 0;
	duration = 0;
}

//make a Client with a title and artist
Client::Client(char n[50], int a, int d) {
	strcpy(name, n);
	arrivalTime = a;
	duration = d;
}

//delete the list
/*Client::~Client(){
delete [] title;
delete [] artist;
}*/

Client::Client(const Client& other) {
	strcpy(name, other.name);
	arrivalTime = other.arrivalTime;
	duration = other.duration;
}


//overload == operator
bool operator==(const Client& a, const Client& b) {
	if (strcmp(a.name, b.name) == 0 && a.arrivalTime == b.arrivalTime) {
		return true;
	}
	else {
		return false;
	}
}

//overload << operator
ostream& operator<<(ostream& os, const Client& s) {
	os << s.name << " - " << s.arrivalTime;

	return os;
}

void Client::setName(char n[100]) {
	strcpy(name, n);
}

void Client::setArrivalTime(int a) {
	arrivalTime = a;
}

void Client::setDuration(int d) {
	duration = d;
}