#pragma once
#include <iostream>

class Graphics
{
private:

	int Menu_type , Menu_choice;

	bool Menu_type_Chosen = false;
	
	

public:

	Graphics(int Men_ty, int Men_ch);
	
	int Get_Type_and_Choice() const;

	void Display_Main_Menu_Overall();

	void Display_Main_Menu();

	void Display_Options_Menu();

};

