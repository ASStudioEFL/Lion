#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Lion\nCopyright 2020 Li Chengyun and EFL\nOpen source on github: https://github.com/ASStudioEFL/Lion/\nGPL v3.0 license.\n";
	string command;
	
	while ( command != "exit-lion" )
	{
		cout << " >> ";
		cin >> command;
		if (command == "exit-lion") {cout << "Exit..\n"; break;}
	}

	if (command == "exit-lion") return 0;
	
	return 0;
}
