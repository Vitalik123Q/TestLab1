	// ConsoleApplication1.cpp: определяет точку входа для консольного приложения. 
	#include "stdafx.h" 
	#include<iostream> 
	#include<string.h> 
	#include<Windows.h> 
	// подключаем пространство имен std, в котором // реализованы стандартные потоки ввода/вывода 
	using namespace std;
	struct Device { // Описание класса "Изделия" 				// внутренние свойства и методы класса 
	private:
		char name[20]; // имя 
		char shifr[20]; // класс 
		int kolvo; // средний вес 	 // внешне доступные свойства и методы класса 
	public:
		// методустановкинаименования 
		void set_name(char *new_name) {
			strcpy_s(name, new_name); // копируемстроку 
		}
		// методустановкитипа 
		void set_type(char *new_type) {
			strcpy_s(shifr, new_type); // копируемстроку 
		}
		
		void set_ws(int new_ws) {
			kolvo = new_ws; // копируем значение 
		}
		// метод для получения наименования 
		char *get_name() {
			return name; // возвращаем указатель на строку 
		}
		// метод для получения типа 
		char *get_type() {
			return shifr; // возвращаем указатель на строку 
		}
		// метод для получения мощности 
		int get_ws() {
			return kolvo; // возвращаем значение 
		}
		// метод вывода свойств класса на экран 
		void print() {
			// cout - поток вывода на экран 
			// « - указывает направление вывода, т.е. в поток 
			// endl - указывает на конец строки 
			cout << "Название: " << name << " Шифр: " << shifr << " Кол-во: " << kolvo << endl;
		}	
	};
	int main() {

		setlocale(LC_ALL, "Russian"); // для корректного отображения русской кодировки 
		Device arr[5]; // массив классов
		char name[20]; // переменные для ввода информации 
		char shifr[20];
		int kolvo;
		for (int i = 0; i < 3; i++) { // циклвводаинформации// вводим данные о приборах 
			cout << "Номер " << i + 1 << endl;
			// вводим наименование 
			cout << "Название: ";
			cin >> name;
			// вводимшифр 
			cout << "Шифр: ";
			cin >> shifr;
			// вводим кол-во 
			cout << "Кол-во: ";
			cin >> kolvo;
			// устанавливаем свойства класса в массиве 
			arr[i].set_name(name);
			arr[i].set_type(shifr);
			arr[i].set_ws(kolvo);
		}
		for (int i = 0; i < 3; i++) { // циклвыводаинформации 
			cout << "Название: " << arr[i].get_name() << " Шифр: " << arr[i].get_type() << " Кол-во: " << arr[i].get_ws() << endl;
		}
		system("pause");
		return 0;
	}