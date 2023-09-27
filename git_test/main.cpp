#include<iostream>
#include<vector>

int main()
{
	std::vector<int>Ivec;
	for (int i = 0; i < 10; i++)
	{
		Ivec.emplace_back(i);
	}
	std::cout << "ÐÞ¸Ä" << std::endl;
	std::cout << "dev_test:master" << std::endl;
	std::cout << "Ivec[0]:" << Ivec[0] << std::endl;

	std::cout<<"new dev_zch"<<std::endl;
	std::cout << "ÐÞ¸Ä2" << std::endl;

	std::cout << "�޸�2" << std::endl;
	std::cout << "modify_is" << std::endl;

	return 0;
}
