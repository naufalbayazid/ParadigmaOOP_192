#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;
#include <iostream>
#include <manusia.h>
#include <vector>

class manusia {
public:
	string name;
	jantung varJantung;

		manusia(string pName)
		: name(pName) {
		cout << name << " hidup\n";
	}
	~manusia() {
		cout << name << "mati\n";
	}
};
#endif