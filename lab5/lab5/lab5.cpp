#include <iostream>

class TimeConverter {
private:
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
        }
    }

};
int main() {
    TimeConverter transfer;
    transfer.outputConvertedTime(12, 29, 42);
    transfer.outputConvertedTime(2);
    transfer.outputConvertedTime(27);


    return 0;
}
