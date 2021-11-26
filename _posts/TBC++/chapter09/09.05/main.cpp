#include <iostream>

class Digit {
private:
    int m_digit;
public:
    Digit(int digit = 0) :m_digit{ digit } {}

    friend std::ostream& operator << (std::ostream& out, const Digit& d) {
        out << d.m_digit;
        return out;
    }
};




int main() {
    int a{ 10 };

    std::cout << 


}