#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Trener_h__
#define __Trener_h__

#include "Karta_zdrowia.h"
#include "Grupa_zajêciowa.h"
#include "Trening_personalny.h"
#include "Pracownik.h"

class Karta_zdrowia;
class Grupa_zajêciowa;
class Trening_personalny;
class Pracownik;
class Trener;

class Trener: public Pracownik
{
	public: std::vector<Grupa_zajêciowa*> _unnamed_Grupa_zajêciowa_;
	public: std::vector<Trening_personalny*> _unnamed_Trening_personalny_;

	public: void stwórz_plan_treningowy();
        public: void wglad_do_karty_zdrowia(Klient);
	public: int[70] dostępność_godzinowa();
};

#endif
