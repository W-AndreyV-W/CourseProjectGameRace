#pragma once
#include <iostream>

#ifdef FantasticVehiclesLibrary_EXPORTS
#define FantasticVehicles_API __declspec(dllexport)
#else
#define FantasticVehicles_API __declspec(dllimport)
#endif

class VehiclesInitial {													//	������� �����
public:
	FantasticVehicles_API std::string name();							//	���������� �����
	FantasticVehicles_API float virtual time();							//	����� ����������� ������
	FantasticVehicles_API int type_of_vehicles();						//	���������� ��� ������������� ��������
	FantasticVehicles_API bool in_game();								//	���������� ������� � ����� 
	FantasticVehicles_API void in_game_in(bool in_game);				//	
protected:
	float distance();													//	���������� ��������
	VehiclesInitial(float distance_race, std::string name_vehicles, float speed_vehicles, int type_of_vehicles);
private:
	std::string _name_vehicles;											//	�������� ������������ �������
	float _speed_vehicles = 0;											//	�������� ������������ ������� 
	float _distance_race = 0;											//	����� ������
	int _type_of_vehicles = 0;											//	��� ������������� �������� 1 - ��������, 2 - ���������
	bool _in_game = false;												//	���������� ������� � �����
};