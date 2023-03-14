#include "ArreyVehicles.h"

void arrey_creating(VehiclesInitial**& array_vehicles, int& size_array, int& type_race, float distance_race) {

	//		arrey_creating  должен формироваться из транспортных средств библиотеки,
	//	а в distance_race записываеться общее количество транспортных средств.

	size_array = 7;

	array_vehicles = new VehiclesInitial*[size_array];

	array_vehicles[0] = new Camel(distance_race);
	array_vehicles[1] = new CamelFast(distance_race);
	array_vehicles[2] = new Centaur(distance_race);
	array_vehicles[3] = new AllTerrainBoots(distance_race);
	array_vehicles[4] = new MagicCarpet(distance_race);
	array_vehicles[5] = new Eagle(distance_race);
	array_vehicles[6] = new Broomstick(distance_race);

	if (type_race != 3) {
		int size_array_new = 0;
		for (int i = 0; i < size_array; i++) {
			if ((array_vehicles[i]->type_of_vehicles()) == type_race) {
				size_array_new++;
			}
		}

		VehiclesInitial** array_vehicles_new = new VehiclesInitial*[size_array_new];

		for (int i = 0, j = 0; i < size_array || j < size_array_new; i++) {
			if ((array_vehicles[i]->type_of_vehicles()) == type_race) {
				array_vehicles_new[j] = array_vehicles[i];
				j++;
			}
			else {
				delete array_vehicles[i];
				array_vehicles[i] = nullptr;
			}
		}

		array_vehicles = array_vehicles_new;
		size_array = size_array_new;
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