// 1. ...
#include <iostream>
#include <fstream>

class Point {
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
        :m_x(x), m_y(y), m_z(z) {}
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getZ() const { return m_z; }

    // 1. Cannot be made to member function...
    // 2. Deal with both file print and console print.
    friend std::ostream& operator << (std::ostream& out, const Point& point) {
        out << '(' << point.m_x << ", " << point.m_y << ", " << point.m_z << ')';

        return out;
    }

    friend std::istream& operator >> (std::istream& in, /*const*/Point& point) {
        in >> point.m_x >> point.m_y >> point.m_z;

        return in;
    }
};


int main() {
    std::ofstream of("out.txt");
   
    Point vectorX_1(2.01, 3.02, 4.04);
    Point vectorX_2(11.1, 22.2, 33.3);
    
    std::cout << vectorX_1 << ' ' << vectorX_2 << std::endl;
    of << vectorX_1 << ' ' << vectorX_2 << std::endl;

    of.close();





    Point vectorY_1, vectorY_2;
    
    std::cin >> vectorY_1 >> vectorY_2;

    std::cout << vectorY_1 << ' ' << vectorY_2 << std::endl;
}


// 0. ...
/*
#include <iostream>

class Point {
private:
    double m_x, m_y, m_z;

public:
    Point(double x=0.0, double y = 0.0, double z = 0.0)
        :m_x(x), m_y(y), m_z(z){}
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getZ() const { return m_z; }

    friend std::ostream& operator << (std::ostream& out, const Point& point);
};

std::ostream& operator << (std::ostream& out, const Point& point) {
    out << point.getX() << ' ' << point.getY() << ' ' << point.getZ();

    return out;
}

int main() {

    Point vectorX(2.01, 3.02, 4.04);
    std::cout << vectorX << std::endl;
}
*/