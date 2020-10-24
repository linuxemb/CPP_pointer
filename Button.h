#pragma once
template<typename Handler>

using PtrMem = void(Handler::*)();
template<typename Handler>

class Button
{
//	void (Handler::m_pMem) ();
	PtrMem <typename Handler>m_pMem;
	Handler* m_pObj;
public: 
	Button(Handler* pObj, PtrMem<typename Handler> pMem) :m_pObj{ pObj }, m_pMem{ pMem } {
	
	}
	void GenerateorEvent() {
		(m_pObj->*m_pMem) ();
	}
};

 