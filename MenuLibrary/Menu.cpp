#include "Menu.h"

void menu_race_selection(int& type_race) {
	std::cout << "����� ���������� � �������� ���������!" << std::endl;
	do {
		std::cout << "1. ����� ��������� ����������." << std::endl;
		std::cout << "2. ����� ���������� ����������." << std::endl;
		std::cout << "3. ����� ��������� � ���������� ����������." << std::endl;
		std::cout << "�������� ��� �����: ";
		std::cin >> type_race;
		std::system("cls");
		if (type_race == 1 || type_race == 2 || type_race == 3) {
			break;
		}
		else {
			std::cout << "�� ����� �� ������������ ��� �����!" << std::endl;
		}
	} while (true);
}

void menu_distance_race(float& distance_race) {
	do {
		std::cout << "������� ����� ������ (��������� ������ ���� > 0): ";
		std::cin >> distance_race;
		if (distance_race > 0) {
			break;
		}
		std::system("cls");
	} while (true);
	std::system("cls");
}

void menu_registration(VehiclesInitial**& array_vehicles, int size_array, float& distance_race, int type_race) {
	int registration = 0;
	int number_registered = 0;
	do {
		number_registered = 0;
		for (int i = 0; i < size_array; i++) {
			if (array_vehicles[i]->in_game()) {
				number_registered++;
			}
		}

		if (number_registered < 2) {
			std::cout << "������ ���� ���������������� ���� �� 2 ������������ �������." << std::endl;
			std::cout << std::endl;
		}

		if (type_race == 1) {
			std::cout << "����� ��������� ����������. ����� ������: ";
		}
		else if (type_race == 2) {
			std::cout << "����� ���������� ����������. ����� ������: ";
		}
		else if (type_race == 3) {
			std::cout << "����� ��������� � ���������� ����������. ����� ������: ";
		}
		std::cout << distance_race << std::endl;
		std::cout << std::endl;

		if (number_registered > 0) {
			std::cout << "������������������ ������������ ��������:" << std::endl;
			for (int i = 0; i < size_array; i++) {
				if (array_vehicles[i]->in_game()) {
					std::cout << i + 1 << ". " << array_vehicles[i]->name() << std::endl;
				}
			}
			std::cout << std::endl;
		}
		if (number_registered < size_array) {
			std::cout << "������������ �������� ��������� ��� �����������:" << std::endl;
			for (int i = 0; i < size_array; i++) {
				if (!array_vehicles[i]->in_game()) {
					std::cout << i + 1 << ". " << array_vehicles[i]->name() << std::endl;
				}
			}
			std::cout << std::endl;
		}

		if (number_registered == 0) {
			std::cout << "��������������� ���������: ";
		}
		else if (number_registered < 2) {
			std::cout << "���������������/�������� ����������� ���������(�): ";
		}
		else if (number_registered >= size_array) {
			std::cout << "�������� ����������� ���������� ��� 0 ������ �����: ";
		}
		else {
			std::cout << "���������������/�������� ����������� ���������(�) ��� 0 ������ �����: ";
		}
		std::cin >> registration;
		if (registration < 0 || registration > size_array) {
			std::system("cls");
			std::cout << "�� ������� �� ������������ ��� ������������� ��������.\n" << std::endl;
			continue;
		}
		std::system("cls");

		if (registration == 0) {
			if (number_registered < 2) {
				std::cout << "�� ����������������: " << number_registered << " ������������ �������." << std::endl;
				continue;
			}
			else {
				break;
			}
		}

		if (array_vehicles[registration - 1]->in_game()) {
			array_vehicles[registration - 1]->in_game_in(false);
			std::cout << "�������� ����������� " << array_vehicles[registration - 1]->name() << "." << std::endl;
			std::cout << std::endl;
		}
		else {
			array_vehicles[registration - 1]->in_game_in(true);
			std::cout << array_vehicles[registration - 1]->name() << " ������� ���������������." << std::endl;
			std::cout << std::endl;
		}
	} while (true);
}

void menu_race_result(VehiclesInitial**& array_vehicles, int size_array, bool& game_over) {
	int _game_over = 0;
	std::cout << "��������� �����:" << std::endl;
	for (int i = 0, j = 1; i < size_array; i++) {
		if (array_vehicles[i]->in_game()) {
			std::cout << j << ". " << array_vehicles[i]->name() << ". �����: " << array_vehicles[i]->time() << std::endl;
			j++;
		}
	}
	std::cout << std::endl;
	do {
		std::cout << "1. �������� ��� ���� �����." << std::endl;
		std::cout << "0. �����." << std::endl;
		std::cout << "�������� ��������: ";
		std::cin >> _game_over;
		std::system("cls");
		if (_game_over == 1) {
			game_over = true;
			break;
		}
		else if (_game_over == 0) {
			game_over = false;
			break;
		}
	} while (true);
}