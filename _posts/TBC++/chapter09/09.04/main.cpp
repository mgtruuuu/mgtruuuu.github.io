// 2. ...
#include <iostream>
#include <vector>   
#include <algorithm>
#include <random>


class Cents {
private:
    int m_cents;

public:
    Cents(int cents = 0) :m_cents{ cents } {}

    int getCents_c() const { return m_cents; }
    int& getCents() { return m_cents; }


    friend bool operator == (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() == c2.getCents_c());
    }

    friend bool operator != (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() != c2.getCents_c());
    }

    friend bool operator < (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() < c2.getCents_c());
    }

    friend bool operator <= (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() <= c2.getCents_c());
    }

    friend bool operator > (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() > c2.getCents_c());
    }

    friend bool operator >= (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() >= c2.getCents_c());
    }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents) {
        out << cents.m_cents;
        return out;
    }
};

int main() {
    unsigned int size{ 20 };
    std::vector<Cents> arr(size);
    
    for (unsigned int i{ 0 }; i < size; ++i)
        arr[i].getCents() = i;
    
    std::random_device rd;
    std::mt19937_64 g(rd());
    std::shuffle(begin(arr), end(arr), g);

    for (auto& e : arr)
        std::cout << e << ' ';
    std::cout << std::endl;

    // Before we use this, ...
    std::sort(begin(arr), end(arr));

    for (auto& e : arr)
        std::cout << e << ' ';
    std::cout << std::endl;
}






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


    friend bool operator == (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() == c2.getCents_c());
    }

    friend bool operator != (const Cents& c1, const Cents& c2) {
        return (c1.getCents_c() != c2.getCents_c());
    }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents) {
        out << cents.m_cents;
        return out;
    }
};

int main() {
    Cents p1(6);
    Cents p2(8);
}
*/