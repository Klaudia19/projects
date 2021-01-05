#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

// #include "Karta_zdrowia.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Grupa_zajêciowa.h"

class Karta_zdrowia;
class Wizyta_u_dietetyla;
class Trening_personalny;
class Grupa_zajêciowa;
class Klient;

class Klient
{
	private: String _imiê;
	private: String _nazwisko;
	private: int _rok_urodzenia;
	private: string _imie_rodzica;
	private: string _nazwiski_rodzica;
	private: char _numer_telefonu_opiekuna_prawnego;
	public: Karta_zdrowia* _unnamed_Karta_zdrowia_;
	public: std::vector<Wizyta_u_dietetyla*> _unnamed_Wizyta_u_dietetyla_;
	public: std::vector<Trening_personalny*> _unnamed_Trening_personalny_;
	public: std::vector<Grupa_zajêciowa*> _unnamed_Grupa_zajêciowa_;

	public: void zapisz_na_zajecia();

	public: Klient uaktualnij_dane(string aImie, string aNazwisko, string aImie_rodzica, string aNazwisko_rodzica, char aNumer_telefonu_rodzica);

	public: void wglad_w_karte_zdrowia();
};

#endif
