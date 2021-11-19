#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//creating and openin a text file
	ofstream MyFile("wordfile.txt");

	//Write to the file 
	MyFile << "Files can be tricky, but it is fun enough";

	// Close the file 
	MyFile.close();

	return 0;
}