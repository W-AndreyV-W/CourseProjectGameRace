#pragma once
#include <iostream>
#include "../FantasticVehiclesLibrary/Vehicles.h"

//	Создание массива 
void arrey_creating(VehiclesInitial**& array_vehicles, int& size_array, float distance_race, int type_race);
//	Сортировка массива 
void arrey_sorting(VehiclesInitial**& array_vehicles, int size_array);
//	Удаление массива
void arrey_delete(VehiclesInitial**& array_vehicles, int size_array);
