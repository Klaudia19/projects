#include <exception>
#include <vector>
using namespace std;

#ifndef __Wizyta_u_dietetyla_h__
#define __Wizyta_u_dietetyla_h__

// #include "Trener.h"
// #include "Dietetyk.h"
#include "Klient.h"

class Trener;
class Dietetyk;
class Klient;
class Wizyta_u_dietetyla;

class Wizyta_u_dietetyla
{
	private: int _dzien;
	private: int _godzina_wizyty;
	private: string _cena:_int;
	public: Trener* _unnamed_Trener_;
	public: Dietetyk* _unnamed_Dietetyk_;
	public: std::vector<Klient*> _unnamed_Klient_;

	public: void sprawdzenie();

	public: void analiza();
};

#endif
