/*
�����������, ��� �� ������ ����, � ������� ����� ����� ����� 3 ���� ���������: ����� ��������,
������ � ������. �������� ������������ � ����� ������ ��������� � ������������� ������ ���
�������� ���������� ������� ���� ���������, ������� ����� ��� ���� ����� (����������� �����������
������������� �������, � �� std::array). � ������ ������ ������ ���� ��� ���� 3 ����� ��������,
6 ������� � 12 �����. �������� ������� countTotalItems(), ������� ���������� ����� ����������
���������, ������� ���� � ������. � ������� main() �������� ��������� ������ �������
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
	std::cout<<"����� ���������� ���������: "<<countTotalItems(predmets);
}
