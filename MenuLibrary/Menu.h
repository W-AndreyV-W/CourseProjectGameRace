#pragma once
#include <iostream>
#include "../FantasticVehiclesLibrary/Vehicles.h"

//	Меню выбора типа гонки
void menu_race_selection(int& type_race);
// Меню ввода длинны трассы
void menu_distance_race(float& distance_race);
//	Меню регистрации транспортных средств
void menu_registration(VehiclesInitial**& array_vehicles, int size_array, float& distance_race, int type_race);
//	Меню вывода результатов гонки и выбора дальнейших действий
void menu_race_result(VehiclesInitial**& array_vehicles, int size_array, bool& game_over);