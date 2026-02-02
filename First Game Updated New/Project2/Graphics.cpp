#include "Graphics.h"



Graphics::Graphics(int Men_ty, int Men_ch)
{
	Menu_type = Men_ty;
	Menu_choice = Men_ch;
}

int Graphics::Get_Type_and_Choice() const
{
	return Menu_type;
	return Menu_choice;
}

void Graphics::Display_Main_Menu_Overall()
{
	std::cout << "			Title " << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "					Start Game " << std::endl;
	std::cout << "					  Options " << std::endl;
	std::cout << "						Exit " << std::endl;

}





void Graphics::Display_Main_Menu()
{
	if (Menu_type = 1) {

		

		std::cout << "			Title " << std::endl;
		std::cout << std::endl << std::endl << std::endl;

		std::cout << "					Start Game " << std::endl;
		std::cout << "					  Options " << std::endl;
		std::cout << "						Exit " << std::endl;



	}
}

void Graphics::Display_Options_Menu()
{
	std::cout << "Options Menu" << std::endl;

	std::cout << "Choose Options Selection" << std::endl;

	std::cout << "Choice 1" << "Choose how many lords in realm" << std::endl;

	std::cout << "Choice 2" << "Choose Ruler Gender" << std::endl;

	std::cout << "Choice 3" << "Choose Doll Gender" << std::endl;
}
