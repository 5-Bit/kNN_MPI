// HelloMPI.cpp : Defines the entry point for the application.

#include "stdafx.h"
#include "mpi.h"
#include "stdio.h"
#include "stdlib.h"
#include "KeelParser.h"

int main(int argc, char* argv[]) {

	MPI_Init(&argc, &argv);

	int rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	if (rank == 0) {
		char helloStr[] = "Hello";
		char goodbyeStr[] = "GoodBye";

		keelParser();
		//MPI_SEND(buf, count, datatype ,dest, tag, comm)
		MPI_Send(helloStr, _countof(helloStr), MPI_CHAR, 1, 0, MPI_COMM_WORLD);
		MPI_Send(goodbyeStr, _countof(goodbyeStr), MPI_CHAR, 2, 0, MPI_COMM_WORLD);
	}
	else if (rank == 1) {
		char helloStr[12];
		//MPI_RECV(buf, count, datatype, source, tag, comm, status)
		MPI_Recv(helloStr, _countof(helloStr), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
		printf("Rank 1 received string %s from Rank 0\n", helloStr);

	}
	else if (rank == 2) {
		char goodbyeStr[24];
		MPI_Recv(goodbyeStr, _countof(goodbyeStr), MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
		printf("Rank 2 received string %s from Rank 0\n", goodbyeStr);
	}

	MPI_Finalize();

	return 0;
}

