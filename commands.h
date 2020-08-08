#ifndef COMMANDS_H_
#define COMMANDS_H_

#include <iostream>
#include <cstring>

string get_str_rule = "\"(?!\").*[\'\"\'].*?(?<!\")\""
// "(?!").*['"'].*?(?<!")"  get string in " " or ' '

string print(message) cout << message;
string printl(message) cout << message << endl;
string input(string message = "")
{
	string value;
	cout << message;
	cin >> value;
	return value;
}

#endif
