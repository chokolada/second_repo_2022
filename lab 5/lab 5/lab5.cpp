#include <iostream>

class TimeConventer {
	int hours = 5;
	int minutes = 37;
	int seconds = 42;
public:
	void outputConvertedTime() {
		std::cout << hours  << minutes << seconds << std::endl;
	}
};