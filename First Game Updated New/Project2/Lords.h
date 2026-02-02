#pragma once
#include <string>
#include <iostream>
#include <random>

class Lords
{
private:

	int Loyalty_level, Suspician_level, Rank_level,
		Martial_stat, Diplomacy_stat, 
		Popularity_stat, Num_of_Troops, Num_of_Lords;
	std::string Name;

	

public:

	Lords(int Loy_l, int Sus_l, int R_l,
		int M_s, int D_s,
		int Pop_s, int Num_t, int Num_l, std::string N);
	
	int Get_levels() const;
	int Get_stats() const;
	int Get_Miscellanius() const;
	std::string Get_Name() const;
	void Display_stats();
	void Suspician_Rank_Stats_and_Loyalty_Initial(int loy_l, int sus_l, int R_l, int M_s, int D_s, int Pop_s, int Num_t, std::string N);
	
};

