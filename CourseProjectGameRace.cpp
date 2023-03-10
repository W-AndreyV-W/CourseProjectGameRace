#include <iostream>
#include <cstdlib>
#include <Locale.h>
#include "./FantasticVehiclesLibrary/Vehicles.h"
#include "./MenuLibrary/Menu.h"
#include "./ArreyVehiclesLibrary/ArreyVehicles.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int type_race = 0;
	int size_array = 1;
	float distance_race = 0;
	bool game_over = false;
	VehiclesInitial** array_vehicles;
		
	do {
		menu_race_selection(type_race);
		menu_distance_race(distance_race);
		arrey_creating(array_vehicles, size_array, distance_race, type_race);
		menu_registration(array_vehicles, size_array, distance_race, type_race);
		arrey_sorting(array_vehicles, size_array);
		menu_race_result(array_vehicles, size_array, game_over);
		arrey_delete(array_vehicles, size_array);
	} while (game_over);
	
}