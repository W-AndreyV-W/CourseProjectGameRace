#include "Menu.h"

void menu_race_selection(int& type_race) {
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	do {
		std::cout << "1. Гонка наземного транспорта." << std::endl;
		std::cout << "2. Гонка воздушного транспорта." << std::endl;
		std::cout << "3. Гонка наземного и воздушного транспорта." << std::endl;
		std::cout << "Выберите тип гонки: ";
		std::cin >> type_race;
		std::system("cls");
		if (type_race == 1 || type_race == 2 || type_race == 3) {
			break;
		}
		else {
			std::cout << "Вы ввели не существующий тип гонки!" << std::endl;
		}
	} while (true);
}

void menu_distance_race(float& distance_race) {
	do {
		std::cout << "Укажите длину трассы (дистанция должна быть > 0): ";
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
			std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средств." << std::endl;
			std::cout << std::endl;
		}

		if (type_race == 1) {
			std::cout << "Гонка наземного транспорта. Длина трассы: ";
		}
		else if (type_race == 2) {
			std::cout << "Гонка воздушного транспорта. Длина трассы: ";
		}
		else if (type_race == 3) {
			std::cout << "Гонка наземного и воздушного транспорта. Длина трассы: ";
		}
		std::cout << distance_race << std::endl;
		std::cout << std::endl;

		if (number_registered > 0) {
			std::cout << "Зарегистрированные транспортные средства:" << std::endl;
			for (int i = 0; i < size_array; i++) {
				if (array_vehicles[i]->in_game()) {
					std::cout << i + 1 << ". " << array_vehicles[i]->name() << std::endl;
				}
			}
			std::cout << std::endl;
		}
		if (number_registered < size_array) {
			std::cout << "Транспортные средства доступные для регистрации:" << std::endl;
			for (int i = 0; i < size_array; i++) {
				if (!array_vehicles[i]->in_game()) {
					std::cout << i + 1 << ". " << array_vehicles[i]->name() << std::endl;
				}
			}
			std::cout << std::endl;
		}

		if (number_registered == 0) {
			std::cout << "Зарегистрируйте транспорт: ";
		}
		else if (number_registered < 2) {
			std::cout << "Зарегистрируйте/отмените регистрацию транспорт(а): ";
		}
		else if (number_registered >= size_array) {
			std::cout << "Отмените регистрацию транспорта или 0 начать гонку: ";
		}
		else {
			std::cout << "Зарегистрируйте/отмените регистрацию транспорт(а) или 0 начать гонку: ";
		}
		std::cin >> registration;
		if (registration < 0 || registration > size_array) {
			std::system("cls");
			std::cout << "Вы выбрали не существующий тип транспортного средства.\n" << std::endl;
			continue;
		}
		std::system("cls");

		if (registration == 0) {
			if (number_registered < 2) {
				std::cout << "Вы зарегистрировали: " << number_registered << " транспортных средств." << std::endl;
				continue;
			}
			else {
				break;
			}
		}

		if (array_vehicles[registration - 1]->in_game()) {
			array_vehicles[registration - 1]->in_game_in(false);
			std::cout << "Отменена регистрация " << array_vehicles[registration - 1]->name() << "." << std::endl;
			std::cout << std::endl;
		}
		else {
			array_vehicles[registration - 1]->in_game_in(true);
			std::cout << array_vehicles[registration - 1]->name() << " успешно зарегистрирован." << std::endl;
			std::cout << std::endl;
		}
	} while (true);
}

void menu_race_result(VehiclesInitial**& array_vehicles, int size_array, bool& game_over) {
	int _game_over = 0;
	std::cout << "Результат гонки:" << std::endl;
	for (int i = 0, j = 1; i < size_array; i++) {
		if (array_vehicles[i]->in_game()) {
			std::cout << j << ". " << array_vehicles[i]->name() << ". Время: " << array_vehicles[i]->time() << std::endl;
			j++;
		}
	}
	std::cout << std::endl;
	do {
		std::cout << "1. Провести еще одну гонку." << std::endl;
		std::cout << "0. Выйти." << std::endl;
		std::cout << "Выберите действие: ";
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