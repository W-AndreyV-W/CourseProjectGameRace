#pragma once
#include <iostream>
#include "../FantasticVehiclesLibrary/Vehicles.h"

//	�������� ������� 
void arrey_creating(VehiclesInitial**& array_vehicles, int& size_array, int& type_race, float distance_race);
//	���������� ������� 
void arrey_sorting(VehiclesInitial**& array_vehicles, int size_array);
//	�������� �������
void arrey_delete(VehiclesInitial**& array_vehicles, int size_array);
