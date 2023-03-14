#pragma once
#include <iostream>

#ifdef FantasticVehiclesLibrary_EXPORTS
#define FantasticVehicles_API __declspec(dllexport)
#else
#define FantasticVehicles_API __declspec(dllimport)
#endif

class VehiclesInitial {													//	Базовый класс
public:
	FantasticVehicles_API std::string name();							//	Возращение имени
	FantasticVehicles_API float virtual time();							//	Время прохождения трассы
	FantasticVehicles_API int type_of_vehicles();						//	Возвращает тип транспортного средства
	FantasticVehicles_API bool in_game();								//	Возвращает участие в гонке 
	FantasticVehicles_API void in_game_in(bool in_game);				//	
protected:
	float distance();													//	Возращение дистации
	VehiclesInitial(float distance_race, std::string name_vehicles, float speed_vehicles, int type_of_vehicles);
private:
	std::string _name_vehicles;											//	Название транспортных средств
	float _speed_vehicles = 0;											//	Скорость транспортных средств 
	float _distance_race = 0;											//	Длина трассы
	int _type_of_vehicles = 0;											//	Тип транспортного средства 1 - Наземное, 2 - Воздушное
	bool _in_game = false;												//	Определяет участие в гонке
};