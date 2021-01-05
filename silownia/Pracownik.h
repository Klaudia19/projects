#include <exception>
#include <string>
using namespace std;

#ifndef __Pracownik_h__
#define __Pracownik_h__

class Pracownik;

class Pracownik
{
	private: string _imie;
	private: string _nazwisko;
	private: int _iD;

	public: void wgl¹d_w_karte_zdrowia_pacjenta();

	public: void wglad_do_grafiku();
};

#endif
