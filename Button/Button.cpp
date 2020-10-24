// Button.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Button1.h"
void OnClick(void*)
{
    std::cout << "clicked" << std::endl;
}
/*/
using Callback = void (*)(void*);
class Button
{
    Callback m_callback;

public:
    Button( Callback c);
    ~Button();
    void GenerateEvent() {
        std::cout << "clicked" << std::endl;
    }

};
*/
int main()
{
 //   Callback mcallback;
    Button1 btn(OnClick);

    btn.GeneraterEvent();
    system("Pause");
    
}

