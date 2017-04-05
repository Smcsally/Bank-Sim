#include <iostream>
#include <cstring>
#include <fstream>
#include "ListQueue.h"
 
using namespace std;

int main(int argc, char* argv[]) {
	char filename[50];
	strcpy(filename, argv[1]);
	
	ListQueue q;
	Client temp;
	char name[50];
	int arrivalTime;
	int duration;

	ifstream fin(filename);

	if (fin.is_open()) {
		// the file opened fine! Set our first client to the first line in the file
		fin >> name;
		fin >> arrivalTime;
		fin >> duration;
		temp.setName(name);
		temp.setArrivalTime(arrivalTime);
		temp.setDuration(duration);
	}
	else {
		cout << "File was not found!";
		return 0;
	}
	
	//loop through every minute that the bank is open from 9 AM to 5 PM
	for (int i = 900; i <= 1700; i++) {
		//if our clients arrival time = the current time, they have arrived
		if (temp.getArrivalTime() == i) {
			//check them into the queue
			q.enqueue(temp);
			//move our temp client to the next line in the input file
			fin >> name;
			fin >> arrivalTime;
			fin >> duration;
			temp.setName(name);
			temp.setArrivalTime(arrivalTime);
			temp.setDuration(duration);
		}

		
	}


	return 0;
}