// functionobj.cpp : function obj can save state, which is different from global varible
// can increment this when the function call operator isinvolved.And then.Will print account 
//here.Let's run this.And you can see it shows the count as three.So for every invocation of the function object.
//This member variable stored a state

#include <iostream>

struct PrettyPrint {
    int count{};  //similiar to the static cont like line 15
    void operator()(const char*p) {
        std::cout << "####" << p << "####" << std::endl;
        ++count;
    }
};

void PP(const char* p) {
  //  static int i{};  // need add static for same result as line 7 has.
    //Now we can invoke this function as.But the problem is we cannot access 
    //this integer variableI.So even if we call PT print global function multipletimes.This I will store some state,but we cannot access it.And Secondly, we cannot have different states of this.I variable for different invocations of this function.The way we had 
    //different states of the count variablefor differe

    int i{};
    ++i;
    std::cout << "i==#" << i<< "####" << std::endl;
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
