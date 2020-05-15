/* Написать программу пересчёта расстояния из верст в километры (1 верста = 1066.8 м).*/

#include <iostream>
#include <clocale> // для вывода сообщений на кириллице

using std::cout; using std::cin; using std::endl;

// получаем от пользователя количество вёрст
double get_versts()
{
	cout << "Введите расстояние в вёрстах: ";
	double answer;
	cin >> answer;
	while (cin.fail() || (answer < 0))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Вы ввели нечто некорректное, введите расстояние в вёрстах: ";
		cin >> answer;
	}
	return answer;
}

// считаем и выводим километры по вёрстам
void calculate_km(const double versts)
{
	static const double km_in_one_verst{ 1.0668 };  // так как константа статическая, она создаётся только один раз
	cout << versts << " вёрст = " << versts * km_in_one_verst << " км" << endl << endl;
}

int main()
{
	setlocale(LC_CTYPE, "rus"); // для вывода сообщений на кириллице
	while (true)
	{
		calculate_km(get_versts());
	}
	return 0;
}
