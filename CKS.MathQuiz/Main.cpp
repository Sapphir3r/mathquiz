
// Project Name
// Your Name

#include <iostream>
#include <conio.h>
#include <string>
#include < vector>
#include <fstream>
#include<time.h>

using namespace std;

int main()
{
	vector<string> questions;
	srand(time(NULL));
	int randomNumber = 0;
	string filepath = "mathquiz.txt";
	string filepath2 = "mathanswers.txt";
	ifstream ifs(filepath);
	string line;
	
	
	cout << "Welcome to the Math Quiz \n\n";
	while (getline(ifs, line))
	{
		questions.push_back(line);
	}
	ifs.close();
	ofstream ofs(filepath2);
	for (int i = 1; i < 4; i++)
	{
		randomNumber = rand() % 10 ;
		
		cout << "Question " << i << ": " << questions[randomNumber] << "= \n";
		cout << "Enter your answer: ";
		int answer1;
		cin >> answer1;
		cout << "\n\n";
		
		ofs << questions[randomNumber]<< "= "  << answer1 <<"\n";
		
	}
	ofs.close();
	(void)_getch();
	return 0;
}
