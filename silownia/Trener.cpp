#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Trener.h"
#include "Karta_zdrowia.h"
#include "Grupa_zajêciowa.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Pracownik.h"
#include "Klient".h


void Trener::wglad_do_karty_zdrowia(Klient *k)
{
	cout<<"Masa: "<< k->_masa<<<endl;
	cout<<"	Wzrost: "<<k->_wzrost<<endl;
	cout<<"Grupa krwi: "k->_grupa_krwi<<endl;	
}

int Trener::dostepnosc_godzinowa()
{
	
}

