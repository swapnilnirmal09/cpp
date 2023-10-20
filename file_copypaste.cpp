
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	string line;
	
	ifstream inputfile{
		"alphabet.txt"
	}; 
	ofstream outputfile{ "copy.txt" };
	if (inputfile && outputfile) {

		while (getline(inputfile, line)) {
			outputfile << line << "\n";
		}
		cout << "Copy Finished \n";
	}
	else {
		
		printf("Cannot read File");
	}
	
	inputfile.close();
	outputfile.close();
	return 0;
}
