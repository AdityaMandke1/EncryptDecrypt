#include<iostream>
#include<string.h>
#include<vector>
#include<chrono>
using namespace std;
using namespace std::chrono;
#define MAX 100000

char changeCharCase1(int i) { //32 to 43
	char x;
	switch (i) {
	case 32: x = 32;
		break;
	case 33: x = 65;
		break;
	case 34: x = 67;
		break;
	case 35: x = 69;
		break;
	case 36: x = 71;
		break;
	case 37: x = 73;
		break;
	case 38: x = 75;
		break;
	case 39: x = 77;
		break;
	case 40: x = 79;
		break;
	case 41: x = 81;
		break;
	case 42: x = 83;
		break;
	case 43: x = 85;
		break;
	}
	return x;
}

char changeCharCase2(int i) { //44 to 55
	char x;
	switch (i) {
	case 44: x = 87;
		break;
	case 45: x = 89;
		break;
	case 46: x = 91;
		break;
	case 47: x = 93;
		break;
	case 48: x = 95;
		break;
	case 49: x = 97;
		break;
	case 50: x = 99;
		break;
	case 51: x = 101;
		break;
	case 52: x = 103;
		break;
	case 53: x = 105;
		break;
	case 54: x = 107;
		break;
	case 55: x = 109;
		break;
	}

	return x;
}

char changeCharCase3(int i) { //56 to 67
	char x;
	switch (i) {
	case 56: x = 111;
		break;
	case 57: x = 113;
		break;
	case 58: x = 115;
		break;
	case 59: x = 117;
		break;
	case 61: x = 121;
		break;
	case 62: x = 123;
		break;
	case 63: x = 125;
		break;
	case 64: x = 126;
		break;
	case 65: x = 33;
		break;
	case 66: x = 102;
		break;
	case 67: x = 34;
		break;
	default: x = 32;
		break;
	}

	return x;
}

char changeCharCase4(int i) {//68 to 79
	char x;
	switch (i) {
	case 68: x = 96;
		break;
	case 69: x = 35;
		break;
	case 70: x = 100;
		break;
	case 71: x = 36;
		break;
	case 72: x = 82;
		break;
	case 73: x = 37;
		break;
	case 74: x = 86;
		break;
	case 75: x = 38;
		break;
	case 76: x = 84;
		break;
	case 77: x = 39;
		break;
	case 78: x = 108;
		break;
	case 79: x = 40;
		break;
	}

	return x;
}

char changeCharCase5(int i) {//80 to 91
	char x;
	switch (i) {
	case 80: x = 112;
		break;
	case 81: x = 41;
		break;
	case 82: x = 72;
		break;
	case 83: x = 42;
		break;
	case 84: x = 76;
		break;
	case 85: x = 43;
		break;
	case 86: x = 74;
		break;
	case 87: x = 44;
		break;
	case 88: x = 118;
		break;
	case 89: x = 45;
		break;
	case 90: x = 94;
		break;
	case 91: x = 46;
		break;
	}

	return x;
}

char changeCharCase6(int i) {//92 to 103
	char x;
	switch (i) {
	case 92: x = 116;
		break;
	case 93: x = 47;
		break;
	case 94: x = 90;
		break;
	case 95: x = 48;
		break;
	case 96: x = 68;
		break;
	case 97: x = 49;
		break;
	case 98: x = 120;
		break;
	case 99: x = 50;
		break;
	case 100: x = 70;
		break;
	case 101: x = 51;
		break;
	case 102: x = 66;
		break;
	case 103: x = 52;
		break;

	}

	return x;
}

char changeCharCase7(int i) {//104 to 115
	char x;
	switch (i) {
	case 104: x = 104;
		break;
	case 105: x = 53;
		break;
	case 106: x = 104;
		break;
	case 107: x = 54;
		break;
	case 108: x = 78;
		break;
	case 109: x = 55;
		break;
	case 110: x = 114;
		break;
	case 111: x = 56;
		break;
	case 112: x = 80;
		break;
	case 113: x = 57;
		break;
	case 114: x = 110;
		break;
	case 115: x = 58;
		break;
	}

	return x;
}

char changeCharCase8(int i) {//116 to 126
	char x;
	switch (i) {
	case 116: x = 92;
		break;
	case 117: x = 59;
		break;
	case 118: x = 88;
		break;
	case 119: x = 60;
		break;
	case 120: x = 98;
		break;
	case 121: x = 61;
		break;
	case 122: x = 124;
		break;
	case 123: x = 62;
		break;
	case 124: x = 122;
		break;
	case 125: x = 63;
		break;
	case 126: x = 64;
		break;
	}

	return x;
}

char checkChar(int i, long int j) {
	char x;//= 48;
	if (i >= 32 && i <= 43) {
		x = changeCharCase1(i);
	}
	else if (i >= 44 && i <= 55) {
		x = changeCharCase2(i);
	}
	else if (i >= 56 && i <= 67) {
		x = changeCharCase3(i);
	}
	else if (i >= 68 && i <= 79) {
		x = changeCharCase4(i);
	}
	else if (i >= 80 && i <= 91) {
		x = changeCharCase5(i);
	}
	else if (i >= 92 && i <= 103) {
		x = changeCharCase6(i);
	}
	else if (i >= 104 && i <= 115) {
		x = changeCharCase7(i);
	}
	else if (i >= 116 && i <= 126) {
		x = changeCharCase8(i);
	}
	return x;
}
int main()
{
	int c = 0;
	char input[MAX]; // an input string
	cout << "Enter String :" << endl;
	//cin >> input;	// taking input of string
	cin.getline(input, MAX);
	int inputLength = strlen(input); // length of input string = inputLength
	vector<char>output;		//char vector output is declared
	output.resize(inputLength); // vector output resized according to length of output = length of output. To conserve memory
	long int ite = 0; // iterator ite
	for (ite = 0; ite < inputLength; ite++) {  //taking input
		output[ite] = checkChar(input[ite], ite);
	}
	cout << "Your input is encrypted as : " << endl; //printing output
	auto start = high_resolution_clock::now(); //timer begins
	for (ite = 0; ite < inputLength; ite++) { //output printing begins
		cout << output[ite];
	}
	cout << endl;
	cout << inputLength << "bytes" << endl; //length of output string
	cout << endl;
	auto stop = high_resolution_clock::now(); //timer stop
	auto duration = duration_cast<microseconds>(stop - start); //time calculate
	cout << duration.count() << " ms" << endl; //printing output of compiletime
	cout << "Press any key to exit";
	char x;
	cin >> x;
	return 0;
}
