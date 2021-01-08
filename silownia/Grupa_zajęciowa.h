#include <exception>
using namespace std;

#ifndef __Grupa_zajêciowa_h__
#define __Grupa_zajêciowa_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Grupa_zajêciowa;

class Grupa_zajêciowa
{
	private: string _godzina:_int_;
	private: string _rodzaj_zajęć:_string;
	private: string _liczba_osób:int;
	private: string _sala:int;
	private: string _data:_int;
	public: Klient* _unnamed_Klient_;
	public: Trener* _unnamed_Trener_;

	public: void dodaj_uczestnika();
	public: void usun_uczestnika();
	public: void analizuj_godziny_zajęć();
};

#endif
