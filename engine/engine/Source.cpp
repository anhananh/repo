#include<iostream>

void Initialize(bool& isFinished)
{
	isFinished = true;
}

int main(void)
{
	bool isFinished;
	Initialize(isFinished);

	while (isFinished)
	{
		//Update Systems
		std::cout << "game go";
	}
}