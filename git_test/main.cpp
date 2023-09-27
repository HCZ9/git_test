#include<iostream>
#include<vector>

int main()
{
	std::vector<int>Ivec;
	for (int i = 0; i < 10; i++)
	{
		Ivec.emplace_back(i);
	}
	std::cout << "测试" << std::endl;
	std::cout << "dev_test:master" << std::endl;
	std::cout << "Ivec[0]:" << Ivec[0] << std::endl;

	std::cout<<"new dev_zch"<<std::endl;
	std::cout << "ÃÃžÂ¸Ã„2" << std::endl;

	std::cout << "ÐÞ¸Ä2" << std::endl;
	std::cout << "modify_is" << std::endl;
	std::cout << "modify2" << std::endl;
	std::cout<<"modify3"<<std::endl;
	std::cout << "modify_dev_ts" << std::endl;
	return 0;
}
