// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Button.h"

class MyHandler{

public:
    void OnClick() {
        std::cout << "Button was clicked" << std::endl;
    }

};

int main()
{
    MyHandler handler;
    Button<MyHandler> btn{ &handler, &MyHandler::OnClick };
    btn.GenerateorEvent();
    system("Pause");
}


