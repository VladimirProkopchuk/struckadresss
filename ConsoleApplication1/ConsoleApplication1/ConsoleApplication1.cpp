// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
struct adress {
	std::string city;
	std::string street;
	int number_house;
	int number_apartament;
	int index;
};

void count(adress& n) {
	cout << "Город:" << n.city << endl;
	cout << "Улица:" << n.street << endl;
	cout << "Номер дома:" << n.number_house << endl;
	cout << "Номер квартиры:" << n.number_apartament << endl;
	cout << "почтовый индекс:" << n.index << endl;
}

int main() {
	system("chcp 1251>nul");
	adress name;
	cout << "Введите город: ";
	cin >> name.city;
	cout << "Введите улицу: ";
	cin >> name.street;
	cout << "Введите номер дома: ";
	cin >> name.number_house;
	cout << "Введите номер квартиры: ";
	cin >> name.number_apartament;
	cout << "Введите почтовый индекс: ";
	cin >> name.index;
	count(name);
	return 0;
	std::cout << "Hello World!\n";
}