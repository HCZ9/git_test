#include<iostream>
#include<vector>

int main()
{
	std::vector<int>Ivec;
	for (int i = 0; i < 10; i++)
	{
		Ivec.emplace_back(i);
	}
	std::cout << "Ivec[0]:" << Ivec[0] << std::endl;
	return 0;
}