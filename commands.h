#ifndef COMMANDS_H_
#define COMMANDS_H_

#include <iostream>
#include <cstring>
#include <regex>

string str("\"(?!\").*[\'\"\'].*?(?<!\")\"");
// "(?!").*['"'].*?(?<!")"  get string in " " or ' '
regex pattern(str, regex::icase);
smatch result;

string print(message) std::cout << message;
string printl(message) std::cout << message << endl;
string input(string message = "")
{
	string value;
	std::cout << message;
	std::cin >> value;
	return value;
}

#endif
