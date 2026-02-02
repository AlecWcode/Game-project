#include "Lords.h"
#include "Game.h"


Lords::Lords(int Loy_l, int Sus_l, int R_l, int M_s, int D_s, int Pop_s, int Num_t, int Num_l, std::string N)

{
	Loyalty_level = Loy_l;
	Suspician_level = Sus_l;
	Rank_level = R_l;
	Martial_stat = M_s;
	Diplomacy_stat = D_s;
	Popularity_stat = Pop_s;
	Num_of_Troops = Num_t;
	Num_of_Lords = Num_l;
	Name = N;
}

int Lords::Get_levels() const
{
	return Loyalty_level;
	return Suspician_level;
	return Rank_level;
}

int Lords::Get_stats() const
{
	return Diplomacy_stat;
	return Martial_stat;
	return Popularity_stat;
	
}

int Lords::Get_Miscellanius() const
{
	return Num_of_Troops;
	return Num_of_Lords;
}

std::string Lords::Get_Name() const
{
	return std::string(Name);
}



void Lords::Display_stats()
{
	std::cout << Loyalty_level << " " << Suspician_level << " " << Rank_level << " " << Martial_stat << " " << Diplomacy_stat << " " << Num_of_Troops << " " << Name << std::endl;
}

void Lords::Suspician_Rank_Stats_and_Loyalty_Initial(int loy_l, int sus_l, int R_l, int M_s, int D_s, int Pop_s, int Num_t, std::string N)
{
	int Difficulty;

	std::cin >> Difficulty;
	
	switch (Difficulty) {

		

	case 1:

		

		Loyalty_level = 5;
		Suspician_level = 0;
		
		{
			std::random_device rdzero;
			std::mt19937 rngzero(rdzero());
			std::uniform_int_distribution<int> zero_stat_Dist(3, 5);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Martial_stat = zero_stat_Dist(rngzero);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Rank_level = zero_stat_Dist(rngzero);
			Popularity_stat = zero_stat_Dist(rngzero);
			Num_of_Troops = zero_stat_Dist(rngzero);
			Name = Name;
			break;
		}


	case 2:

		Loyalty_level = 4;
		Suspician_level = 1;

	{
		
			std::random_device rdzero;
			std::mt19937 rngzero(rdzero());
			std::uniform_int_distribution<int> zero_stat_Dist(3, 5);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Martial_stat = zero_stat_Dist(rngzero);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Rank_level = zero_stat_Dist(rngzero);
			Popularity_stat = zero_stat_Dist(rngzero);
			Num_of_Troops = zero_stat_Dist(rngzero);
			Name = Name;

	}
	break;

	case 3:

		Loyalty_level = 3;
		Suspician_level = 2;

	{
		
			std::random_device rdzero;
			std::mt19937 rngzero(rdzero());
			std::uniform_int_distribution<int> zero_stat_Dist(3, 5);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Martial_stat = zero_stat_Dist(rngzero);
			Diplomacy_stat = zero_stat_Dist(rngzero);
			Rank_level = zero_stat_Dist(rngzero);
			Popularity_stat = zero_stat_Dist(rngzero);
			Num_of_Troops = zero_stat_Dist(rngzero);
			Name = Name;


	}
	break;
	}
}
