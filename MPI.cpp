// MPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mpi.h"
#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iterator>

using namespace std;

struct IrisData {
	double sepalLength;
	double sepalWidth;
	double petalLength;
	double petalWidth;
	std::string classification;
};

int main(int argc, char* argv[]) {
	std::ifstream file("iris.dat");
	//std::string line;

	int count = 0;

	for (std::string line; getline(file, line);) {
		// temp values
		double sepalLength;
		double sepalWidth;
		double petalLength;
		double petalWidth;
		
		// read each line and assign structs data
		if (line.substr(0, 1) != "@") {
			// print current line and return every iteration
			//std::cout << line << "\n";
			
			//string sentence = "And I feel fine...";
			//istringstream iss(sentence);
			//copy(istream_iterator<string>(iss),
			//	istream_iterator<string>(),
			//	ostream_iterator<string>(cout, "\n"));
			
			// assign temps of temps
			string sLength = line.substr(0, 3);
			string sWidth = line.substr(5, 3);
			string pLength = line.substr(10, 3);
			string pWidth = line.substr(15, 3);
			
			// assign temps
			sepalLength = atof(sLength.c_str());
			sepalWidth = atof(sWidth.c_str());
			petalLength = atof(pLength.c_str());
			petalWidth = atof(pWidth.c_str());

			// assign iris data the temp values
			IrisData irisData;
			irisData.sepalLength = sepalLength;
			irisData.sepalWidth = sepalWidth;
			irisData.petalLength = petalLength;
			irisData.petalWidth = petalWidth;
			irisData.classification = "";

			// print struct values
			std::cout << count << ": \n";
			std::cout << "Sepal Length: " << irisData.sepalLength << "\n";
			std::cout << "Sepal Width: " << irisData.sepalWidth << "\n";
			std::cout << "Petal Length: " << irisData.petalLength << "\n";
			std::cout << "Petal Width: " << irisData.petalWidth << "\n";

			count++;
		}
	}

	system("pause");
}
