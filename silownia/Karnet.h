#include <exception>
using namespace std;

#ifndef __Karnet_h__
#define __Karnet_h__

// #include "Recepcjonista.h"

class Recepcjonista;
class Karnet;

class Karnet
{
	private: bool _zni¿ka_uczniowska;
	private: bool _prowadzenie_dietetyczne;
	private: bool _treningi_personalne;
	private: int _cena;
	public: Recepcjonista* _unnamed_Recepcjonista_;

	public: void kup();
};

#endif
