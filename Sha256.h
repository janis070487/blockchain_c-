#pragma once
//#include <iostream>
#define uint unsigned int

using namespace std;

class Sha256 {
private:
	uint howBlockNead;
public:
	void Init(char data[], uint size);
};
