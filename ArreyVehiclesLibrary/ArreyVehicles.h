#pragma once
#include <iostream>
#include "../FantasticVehiclesLibrary/Vehicles.h"

//	�������� ������� 
void arrey_creating(VehiclesInitial**& array_vehicles, int& size_array, float distance_race, int type_race);
//	���������� ������� 
void arrey_sorting(VehiclesInitial**& array_vehicles, int size_array);
//	�������� �������
void arrey_delete(VehiclesInitial**& array_vehicles, int size_array);
