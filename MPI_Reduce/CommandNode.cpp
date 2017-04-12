/*
	The Command node will be responsible for receiving cluster 
	information from the main entry point, and keeping track of various Store 
	and Mesh nodes’ relation to each other. On application launch, 
	the Command node receives a stream of data from the Keel parser, 
	and forwards it onto the appropriate Store nodes. It then sends 
	messages to the Mesh nodes, telling them to start processing data, 
	and giving them information about how to do so. It then facilitates 
	partition discovery to the Mesh nodes, by allowing them to ask 
	for information about the other Mesh nodes that could be 
	considered their "neighbors".
*/



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

void CommandNode() {

}