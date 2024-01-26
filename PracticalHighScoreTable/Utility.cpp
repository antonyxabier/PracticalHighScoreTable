#include "Utility.h"
#include <string>
#include <iostream>

bool Utility::mGoodRead = true;

bool Utility::IsReadGood() {
	return mGoodRead;
}


int Utility::ReadInt() {
	std::string raw = "";
	int result = 0;
	
	try {
		std::cin >> raw;
		result = std::stoi(raw);
		mGoodRead = true;
	}
	catch (...) {
		mGoodRead = false;
	}

	return result;
}