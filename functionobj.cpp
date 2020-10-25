// functionobj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct PrettyPrint {
    int count{};
    void operator()(const char*p) {
        std::cout << "####" << p << "####" << std::endl;
        ++count;
    }
};

void PP(const char* p) {
    static int i{};
    ++i;
    std::cout << "#" << i<< "####" << std::endl;
}
int main()
{
    PrettyPrint pt{};
    pt("hello");
    pt("hello");
    pt("hello");
    PrettyPrint pt2{};

    std::cout << "count pt=" << pt.count << std::endl; ;
    pt2("Pt2 hello");
    std::cout << "count pt2=" << pt2.count << std::endl; ;
    PP("Using funcitons");
    PP("Using funcitons");

    std::cout << std::endl;
    system("Pause");
}
