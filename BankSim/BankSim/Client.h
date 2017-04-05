#include<iostream>

using namespace std;

class Client {
public:
	// make an Client with no name and title
	Client();

	//make a Client with a name and arrival time and duration
	Client(char name[50], int arrive, int dur);

	// delete the list
	//~Client();

	// copy constructor
	Client(const Client& other);

	// overload operators
	//Client& operator=(const Client& other);
	friend bool operator==(const Client& a, const Client& b);
	friend ostream& operator<<(ostream& os, const Client& s);

	// set the name of the Client
	void setName(char n[50]);

	// set the arrival time of the Client
	void setArrivalTime(int a);

	// set the duration of the clients visit
	void setDuration(int d);

	// set the name of the Client
	char* getName();

	// set the arrival time of the Client
	int getArrivalTime();

	// set the duration of the clients visit
	int getDuration();

private:
	char name[50];
	int arrivalTime;
	int duration;
};