#include "Sha256.h"
#include <iostream>

using namespace std;

void Sha256::Init(char data[], uint size) {
	if (size < 56) { this->howBlockNead = 1; }
	else {
		this->howBlockNead = size / 64;
		int atlikums = size % 64;
		if (atlikums < 56) { howBlockNead++; }
		else { howBlockNead += 2;}
	}
	cout << howBlockNead << endl;
}