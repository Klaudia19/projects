#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Karnet.h"
#include "Pracownik.h"

class Karnet;
// class Pracownik;
class Recepcjonista;

class Recepcjonista: public Pracownik
{
	private: klient _klient;
	public: Recepcjonista* _unnamed_Recepcjonista_;
	public: std::vector<Karnet*> _unnamed_Karnet_;

	
	public: void archiwizuj_potwierdzenia_przelewu();

	public: void dodaj_karnet();
};

#endif
