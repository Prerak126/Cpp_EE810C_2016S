#ifndef ENCRYPTION_H
#define ENCRYPTION_H
/*
Header file for encryption classes
*/
#include <iostream>
using namespace std;

//structs go here, right?
struct Message { //define type
    char name[25]; //member types
} message_object; //object of type

class HandleMessage {
private: 
	Message mess;
	static int count;
public:
	HandleMessage() : mess(mess);
};

class EncryptMessage : public HandleMessage {
	Message mess;
	static int count;
	public:
	EncryptMessage(Message& mess);
	// Message encrypt(Message mess_obj);
};

class Test{
public:
	Test(string a);
};

class DecryptMessage {

};

#endif