#include <iostream>
#include "hdr/encryption.h"
using namespace std;

EncryptMessage::EncryptMessage(Message& mess) : mess(mess) {
	//do.something
	EncryptMessage::count++;
	cout << "hello from encryption func" << endl;
	//return mess;
}

EncryptMessage::Test(string a) {
	cout << a << endl;
}