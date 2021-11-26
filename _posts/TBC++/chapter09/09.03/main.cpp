#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }

    Cents operator - () const {
        return Cents(-m_cents);
    }

    bool operator ! () const {
        return (m_cents != 0) ? true : false;
    }

    friend Cents operator+ (const Cents& c1, const Cents& c2) {
        return Cents(c1.m_cents + c2.m_cents);
    }
};



int main() {
    Cents p1(6);
    Cents p2(8);

    std::cout << (p1 + p2 + Cents(20)).getCents_c() << std::endl;
}