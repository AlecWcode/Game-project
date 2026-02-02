#include "Game.h"
#include "Lords.h"
#include "Graphics.h"
#include <random>
#include <iostream>
#include <string>






Game::Game(int Difficulty, int Main_Menu_Options_choice)
{
	
	Difficulty = diff;
	Main_Menu_Options_choice = Main_opt_ch;
}

int Game::Get_Difficulty()
{
	return Difficulty;
}

void Game::Main_Menu_Selector()
{
	std::cout << "					Choose Your Options between 1 and 3 \n";



	std::cin >> Main_Menu_Options_choice;


	switch (Main_Menu_Options_choice) {

	case 1:

		system("cls");
		void Difficulty_Selector();
		break;

	case 2:

		system("cls");
		void Display_Options_Menu();
		break;

	case 3:

		exit(0);
		break;
	}

}
	void Game::Difficulty_Selector()
	{
		std::cout << "					Choose Your Difficulty between 1 and 3 \n";

		std::cin >> Difficulty;


		while (Difficulty != 1 && Difficulty != 2 && Difficulty != 3) {

			std::cout << "redo choice" << std::endl;
			std::cin >> Difficulty;

			if (Difficulty = 1 | 2 | 3) {

				Lords lord0(0, 0, 0, 0, 0, 0, 0, 0, "John");

				lord0.Suspician_Rank_Stats_and_Loyalty_Initial(0, 0, 0, 0, 0, 0, 0, "John");

				lord0.Display_stats();
				break;
			}



		}
		Difficulty = Difficulty;
	}
	

	int main() {

		Graphics Graphics(0, 0);

		Graphics.Display_Main_Menu();

		Game Game(0, 0);
		
		Game.Main_Menu_Selector();

		Game.Difficulty_Selector();
	}
