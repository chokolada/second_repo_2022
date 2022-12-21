#include <iostream>

class TimeConverter {
private:
<<<<<<< HEAD
    double hours_;
    int minutes_;
    int seconds_;
public:
    int outputConvertedTime(double seconds_to_transfer_) {
        hours_ = seconds_to_transfer_ / 3600;
        std::cout << hours_ << " hours" << std::endl;
        return 0;
    }
    int outputConvertedTime(int hours_to_transfer_) {
        seconds_ = hours_to_transfer_ * 3600;
        std::cout << seconds_ << " seconds" << std::endl;
        return 0;
    }
    int outputConvertedTime(float hours_, int minutes_, int seconds_) {
        std::cout << hours_ << ":" << minutes_ << ":" << seconds_ << std::endl;
        seconds_ += ((hours_ * 60) + minutes_) * 60;
        std::cout << seconds_ << " seconds" << std::endl;
        hours_ = seconds_ / 3600;
        if (minutes_ > 30) {
            std::cout << hours_ << ",5 hours" << std::endl;
        }
        else {
            std::cout << hours_ << " hours" << std::endl;
=======
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
>>>>>>> 87e9759cc5477341e35348c112ebcb16d71f12d7
        }
    }

};
<<<<<<< HEAD
int main() {
    TimeConverter transfer;
    transfer.outputConvertedTime(12, 29, 42);
=======
int main () {
    TimeConverter transfer;
    transfer.outputConvertedTime(12,29,42);
>>>>>>> 87e9759cc5477341e35348c112ebcb16d71f12d7
    transfer.outputConvertedTime(2);
    transfer.outputConvertedTime(27);


    return 0;
}
