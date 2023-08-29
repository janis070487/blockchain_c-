#include <iostream>
#include "Sha256.h"
using namespace std;

int main() {
	char Data[] = { "Janis mil katrinu" };

	Sha256 sha = Sha256();

	sha.Init(Data, 184);



}