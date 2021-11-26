// 4. ...
#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }

    Cents operator+ (const Cents& c2) {
        return Cents(this->m_cents + c2.m_cents);
    }
};

int main() {
    Cents p1(6);
    Cents p2(8);

    std::cout << (p1 + p2 + Cents(20)).getCents_c() << std::endl;
}


// 3. ...
/*
#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }

    friend Cents operator+ (const Cents& c1, const Cents& c2);
};


// friend 쪽으로 위치 옮길수도 있다.
Cents operator+ (const Cents& c1, const Cents& c2) {
    return Cents(c1.m_cents + c2.m_cents);
}

int main() {
    Cents p1(6);
    Cents p2(8);

    std::cout << (p1 + p2 + Cents(20)).getCents_c() << std::endl;
}
*/



// 2. ...
/*
#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }
};

Cents operator+ (const Cents& c1, const Cents& c2) {
    return Cents(c1.getCents_c() + c2.getCents_c());
}

int main() {
    Cents p1(6);
    Cents p2(8);

    std::cout << (p1 + p2 + Cents(20)).getCents_c() << std::endl;

    return 0;
}
*/



// 1. ...
/*
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
*/