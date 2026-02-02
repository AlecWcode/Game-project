#pragma once
#include "Lords.h";
#include "Graphics.h"
#include <random>

class Game
{
private:
	
	/* User Functions*/
	
	
	
private:

	/*User Variables*/
	int Main_Menu_Options_choice;
	int Main_opt_ch;
	int Difficulty;
	int diff;
	



	
	

	/*Lords lord0;
	Lords lord1;
	Lords lord2;
	Lords lord3;
	Lords lord4;*/

	

public:

	Game(int Difficulty, int Main_Menu_Options_choice);
	

	int Get_Difficulty();

	void Main_Menu_Selector();
	void Difficulty_Selector();
	

};



