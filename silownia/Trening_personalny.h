#include <vector>
using namespace std;

#ifndef __Trening_personalny_h__
#define __Trening_personalny_h__

#include "Trener.h"
#include "Klient.h"

class Trener;
class Klient;
class Trening_personalny;

class Trening_personalny
{
	private: string _intensywnosc:_string;
	private: string _dzieñ:_int;
	private: string _godzina:_int;
	public: std::vector<Trener*> _unnamed_Trener_;
	public: std::vector<Klient*> _unnamed_Klient_;
};

#endif
