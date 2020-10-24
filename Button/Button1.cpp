#include "Button1.h"
Button1::Button1(Callback c) :m_callback{c}
{
	void GenerateorEvent();
	
}

Button1:: ~Button1()
{
	
}

void Button1::GeneraterEvent()
{
	m_callback(nullptr);
}