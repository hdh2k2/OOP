#pragma once
#include<iostream>

using namespace std;

ostream& operator<<(ostream& xuat, const char* chuoi) {
	xuat << (string)"Entering the Hello program saying...\n";

	for (int i = 0; i < strlen(chuoi); i++)
		xuat << chuoi[i];
	xuat << (string)"Then exiting...";
	return xuat;

}