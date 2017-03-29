//Parse files with the keel format

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

void keelParser() {

	std::ifstream file("iris.dat");
	std::string line;

	for (std::string line; getline(file, line);) {
		std::cout << line << "\n";
		
		if (line.substr(0, 1) == "@"
			//line.substr(0, 1).compare("@");
		) {
			string sentence = "And I feel fine...";
			istringstream iss(sentence);
			copy(istream_iterator<string>(iss),
				istream_iterator<string>(),
				ostream_iterator<string>(cout, "\n"));
		}
		IrisData irisData;
		irisData.sepalLength = 1.0;
		irisData.sepalWidth = 1.0;
		irisData.petalLength = 1.0;
		irisData.petalWidth = 1.0;
		irisData.classification = "";
	}
	
	//system("pause");
}