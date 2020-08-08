#include <iostream>
#include <cstring>
#include <cstdlib>
#include "commands.h"
using namespace std;

int main()
{
	cout << "Panda\nCopyright 2020 Li Chengyun and EFL\nOpen source on github: https://github.com/ASStudioEFL/Lion/\nGPL v3.0 license.\n";
	string command;
	
	while ( command != "exit-lion" )
	{
		cout << " >> ";
		cin >> command;
		if (command == "panda-exit") {cout << "Exit..\n"; break;}
		if (command == "panda-help") {system("start \"https://github.com/ASStudioEFL/Panda/wikis\"");}
		// if (command == "print())
		else cout << "Unknown command: \"" << command << "\" \nTraceback:\n\tLine 1\n\tLion 0.0.1 Alpha\n\tUnknown command, please check\n";
	}

	if (command == "panda-exit") return 0;
	
	return 0;
}
