/*
	The Mesh Nodes will be responsible for performing 
	local kNN calculations. The number of Mesh Nodes 
	that should be instantiated depends on the value 
	of k; specifically, the number of mesh nodes should 
	be (k-1)/2. If there are not enough points to calculate 
	local kNN within a Mesh Node, then the neighboring Mesh 
	Nodes will be called upon to calculate the local kNN 
	for those points. 
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

void MeshNode() {

}