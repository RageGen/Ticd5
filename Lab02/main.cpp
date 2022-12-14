#include "Func.hpp"
using namespace std;
using namespace ZDA;
int main(int argc,const char* argv[])
{
	FilesInput(argv[1],argv[2]);
	InputFile(argv[3]);
	system("cls");
	int CheckMenu = 0;
	const int ItemsNumber = 5;
	bool RunMenu = true;
	Item Items[ItemsNumber]{ Item{"Data Input",DataInputFromKeyboard},Item{"Data output",PrintData},Item{"Reading data from a file",InputDataFromText},Item{"Output data to a file",OutputToFile},Item{"Individual task",IndividualQuestions}};
	Menu menu("Main menu", Items, ItemsNumber);
	while (menu.runCommand())
	{
		system("cls");
	}
	return 0;
}
