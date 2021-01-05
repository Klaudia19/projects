#include <exception>
#include <string>
using namespace std;

#ifndef __Karta_zdrowia_h__
#define __Karta_zdrowia_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Karta_zdrowia;

class Karta_zdrowia
{
	private: string _masa:_int;
	private: string _wzrost:_int;
	private: string _grupa_krwi;
	public: Klient* _unnamed_Klient_;
	public: Trener* _unnamed_Trener_;

	private: void dodaj_informacje();

	private: void zmien_dane();
};

#endif
