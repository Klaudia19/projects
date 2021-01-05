#include <exception>
using namespace std;

#ifndef __Subskrypcja__h__
#define __Subskrypcja__h__

#include "Karnet.h"

// class Karnet;
class Subskrypcja_;

class Subskrypcja_: public Karnet
{
	private: string _czas_trwania:_int;

	public: void przed³ó¿();

	public: void zawieœ();
};

#endif
