# include<iostream>
# include<string>

enum class seasons
{
	�����,
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������

};



int main() {
	setlocale(LC_ALL, "Russian");

	int p;
	seasons s;

	static_cast<seasons>(p);
	do {
		std::cin >> p;

		s=static_cast<seasons>(p);

		switch (s) {
		case seasons::������:
			std::cout << "������" << std::endl;
			break;
		case seasons::�������:
			std::cout << "�������" << std::endl;
			break;
		case seasons::����:
			std::cout << "����" << std::endl;
			break;
		case seasons::������:
			std::cout << "������" << std::endl;
			break;
		case seasons::���:
			std::cout << "���" << std::endl;
			break;
		case seasons::����:
			std::cout << "����" << std::endl;
			break;
		case seasons::����:
			std::cout << "����" << std::endl;
			break;
		case seasons::������:
			std::cout << "������" << std::endl;
			break;
		case seasons::��������:
			std::cout << "��������" << std::endl;
			break;
		case seasons::�������:
			std::cout << "�������" << std::endl;
			break;
		case seasons::������:
			std::cout << "������" << std::endl;
			break;
		case seasons::�������:
			std::cout << "�������" << std::endl;
			break;
		case seasons::�����:
			std::cout <<"�� ��������" << std::endl;
			break;

		default:
			std::cout << "������������ �����!" << std::endl;
		}
	} while (s != seasons::�����);

	return 0;



}