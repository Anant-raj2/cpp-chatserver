#pragma once

#include <vector>

#define PARSER_DELIMITER ' '

using namespace std;

class Parser
{
	private:
//		string input;

	public:
		vector<string> values;
		void parse(char *buffer);
		void parse(const char *buffer);
};
