#include <iostream>

#include "Musician.h"

Musician::Musician()
	{
		instrument_name = "null";
		XPyears = 0;
	}
Musician::Musician(std::string instrument, int experience)
	{
		instrument_name = instrument;
		XPyears = experience;
	}

std::string Musician::get_instrument()
	{
		return instrument_name;
	}
int Musician::get_experience()
	{
		return XPyears;
	}