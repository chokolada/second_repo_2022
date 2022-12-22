#include <iostream>

class TimeConverter {
private:
    double hours;
    int minutes;
    int seconds;
public:
    int outputConvertedTime(double secondsToTransfer) {
        hours = secondsToTransfer / 3600;
        std::cout<< hours << " hours" <<std::endl;
        return 0;
    }
    int outputConvertedTime(int hoursToTransfer) {
        seconds = hoursToTransfer * 3600;
        std::cout<< seconds << " seconds" <<std::endl;
        return 0;
    }
    int outputConvertedTime(float hours, int minutes, int seconds) {
        std::cout<< hours << ":" << minutes << ":" << seconds <<std::endl;
        seconds += ((hours * 60) + minutes) * 60;
        std::cout<< seconds << " seconds" <<std::endl;
        hours = seconds / 3600;
        if (minutes > 30) {
            std::cout<< hours << ",5 hours" <<std::endl;
        } else {
            std::cout<< hours << " hours" <<std::endl;
        }
    }

};
int main () {
    TimeConverter transfer;
    transfer.outputConvertedTime(12,29,42);
    transfer.outputConvertedTime(2);
    transfer.outputConvertedTime(27);


    return 0;
}
