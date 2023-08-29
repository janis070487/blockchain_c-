#include "Sha256.h"
#include <iostream>
#define uint unsigned int
using namespace std;

void Sha256::Init(char data[], uint size) {
	if (size < 56) { this->howBlockNead = 1; }
	else {
		this->howBlockNead = size / 64;
		uint atlikums = size % 64;
		if (atlikums < 56) { howBlockNead++; }
		else { howBlockNead += 2; }
	}
	this->Data = new uint[16 * this->howBlockNead];
	for (int i = 0; i < (16 * this->howBlockNead); i++) {
		//Data[i] = 0;
	};
	cout << Data[4] << endl;
	//for (int i = 0; i < 64; i++)
	//{
	//	cout << this->Data[i] << endl;
	//}
}