#pragma once
using Callback = void (*)(void*);

class Button1
{

	Callback m_callback;
public:
	Button1(Callback c);
	~Button1();
	void GeneraterEvent();	

};

