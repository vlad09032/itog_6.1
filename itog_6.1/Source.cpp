/*
Представьте, что вы пишете игру, в которой игрок может иметь 3 типа предметов: зелья здоровья,
факелы и стрелы. Создайте перечисление с этими типами предметов и фиксированный массив для
хранения количества каждого типа предметов, которое имеет при себе игрок (используйте стандартные
фиксированные массивы, а не std::array). У вашего игрока должны быть при себе 3 зелья здоровья,
6 факелов и 12 стрел. Напишите функцию countTotalItems(), которая возвращает общее количество
предметов, которые есть у игрока. В функции main() выведите результат работы функции
countTotalItems().
*/
#include<iostream>

enum Predmet
{
	PREDMET_HEALTHPOTION,
	PREDMET_TORCH,
	PREDMET_ARROWS,
	Maxpredmet
};

int  countTotalItems(const int predmets[])
{
	setlocale(LC_ALL, "");
	int summ{0};
	for (int i{ 0 }; i < Maxpredmet; ++i)
		summ += predmets[i];
	return summ;
}

int main()
{
	int predmets[Maxpredmet] = { 3,6,12 };
	std::cout<<"Общее количество предметов: "<<countTotalItems(predmets);
}
