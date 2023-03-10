#include "ArreyVehicles.h"

void arrey_creating(VehiclesInitial**& array_vehicles, int& size_array, float distance_race, int type_race) {

	//		Список(switch) транспортных средств должен формироваться по следующему принципу.
	//	Сначала заносятся конструкторы классов наземных транспортные средства потом воздушных.
	//		В оператор ветвления == 1 заносятся номер первого (start_switch) наземного 
	//	транспортного средства и количество транспортных средств данного типа (size_array).
	//		В оператор ветвления == 2 заносятся номер (start_switch) первого воздушного
	//  транспортного средства и количество транспортных средств данного типа (size_array).
	//		В оператор ветвления == 3 заносятся номер (start_switch) первого транспортного 
	//	средства и общее количество транспортных средств (size_array).

	int start_switch = 0;

	if (type_race == 1) {
		start_switch = 1;
		size_array = 4;
	}
	else if (type_race == 2) {
		start_switch = 5;
		size_array = 3;
	}
	else if (type_race == 3) {
		start_switch = 1;
		size_array = 7;
	}

	array_vehicles = new VehiclesInitial* [size_array];
	for (int i = 0, j = start_switch; i < size_array; i++, j++) {
		switch (j) {
		case 1: array_vehicles[i] = new Camel(distance_race);
			break;
		case 2: array_vehicles[i] = new CamelFast(distance_race);
			break;
		case 3: array_vehicles[i] = new Centaur(distance_race);
			break;
		case 4: array_vehicles[i] = new AllTerrainBoots(distance_race);
			break;
		case 5: array_vehicles[i] = new MagicCarpet(distance_race);
			break;
		case 6: array_vehicles[i] = new Eagle(distance_race);
			break;
		case 7: array_vehicles[i] = new Broomstick(distance_race);
			break;
		}
	}
}

void arrey_sorting(VehiclesInitial**& array_vehicles, int size_array) {
	bool sorting = true;
	do {
		sorting = false;
		for (int i = 0; i < size_array - 1; i++) {
			if (array_vehicles[i]->time() > array_vehicles[i + 1]->time()) {
				VehiclesInitial* array;
				array = array_vehicles[i];
				array_vehicles[i] = array_vehicles[i + 1];
				array_vehicles[i + 1] = array;
				sorting = true;
			}
		}
	} while (sorting);
}

void arrey_delete(VehiclesInitial**& array_vehicles, int size_array) {
	for (int i = 0; i < size_array; i++) {
		delete array_vehicles[i];
		array_vehicles[i] = nullptr;
	}
	delete[] array_vehicles;
	array_vehicles = nullptr;
}