#pragma once
#include <iostream>
#include "../FantasticVehiclesLibrary/Vehicles.h"

//	���� ������ ���� �����
void menu_race_selection(int& type_race);
// ���� ����� ������ ������
void menu_distance_race(float& distance_race);
//	���� ����������� ������������ �������
void menu_registration(VehiclesInitial**& array_vehicles, int size_array, float& distance_race, int type_race);
//	���� ������ ����������� ����� � ������ ���������� ��������
void menu_race_result(VehiclesInitial**& array_vehicles, int size_array, bool& game_over);