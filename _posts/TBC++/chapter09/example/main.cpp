#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }
    //void setCents(int a) { m_cents = a; }

};

void add(const Cents& c1, const Cents& c2, Cents& c_out) {
    c_out.getCents() = c1.getCents_c() + c2.getCents_c();
}

int main() {
    Cents p1(6);
    Cents p2(8);

    Cents sum;
    add(p1, p2, sum);

    std::cout << sum.getCents_c() << std::endl;

    return 0;
}