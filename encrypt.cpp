#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
#define MAX 100

char changeCharCase1(int i) {
	char x;
	switch (i) {
	case 48: x = 112;
		break;
	case 49: x = 113;
		break;
	case 50: x = 114;
		break;
	case 51: x = 115;
		break;
	case 52: x = 116;
		break;
	case 53: x = 117;
		break;
	case 54: x = 118;
		break;
	case 55: x = 119;
		break;
	case 56: x = 120;
		break;
	case 57: x = 121;
		break;
	}
	return x;
}

char changeCharCase2(int i) { //65 to 77
	char x;
	switch (i) {
	case 65: x = 122;
		break;
	case 66: x = 111;
		break;
	case 67: x = 110;
		break;
	case 68: x = 109;
		break;
	case 69: x = 108;
		break;
	case 70: x = 107;
		break;
	case 71: x = 106;
		break;
	case 72: x = 97;
		break;
	case 73: x = 89;
		break;
	case 74: x = 86;
		break;
	case 75: x = 84;
		break;
	case 76: x = 82;
		break;
	case 77: x = 80;
		break;
	}

	return x;
}

char changeCharCase3(int i) { //78 to 90
	char x;
	switch (i) {
	case 78: x = 88;
		break;
	case 79: x = 87;
		break;
	case 80: x = 77;
		break;
	case 81: x = 85;
		break;
	case 82: x = 82;
		break;
	case 83: x = 83;
		break;
	case 84: x = 75;
		break;
	case 85: x = 81;
		break;
	case 86: x = 74;
		break;
	case 87: x = 79;
		break;
	case 88: x = 78;
		break;
	case 89: x = 73;
		break;
	case 90: x = 106;
		break;
	}

	return x;
}

char changeCharCase4(int i) {//97 to 109
	char x;
	switch (i) {
	case 97: x = 72;
		break;
	case 98: x = 105;
		break;
	case 99: x = 104;
		break;
	case 100: x = 103;
		break;
	case 101: x = 102;
		break;
	case 102: x = 101;
		break;
	case 103: x = 100;
		break;
	case 104: x = 99;
		break;
	case 105: x = 98;
		break;
	case 106: x = 71;
		break;
	case 107: x = 70;
		break;
	case 108: x = 69;
		break;
	case 109: x = 68;
		break;
	}

	return x;
}

char changeCharCase5(int i) {//110 to  122
	char x;
	switch (i) {
	case 110: x = 67;
		break;
	case 111: x = 66;
		break;
	case 112: x = 48;
		break;
	case 113: x = 49;
		break;
	case 114: x = 50;
		break;
	case 115: x = 51;
		break;
	case 116: x = 52;
		break;
	case 117: x = 53;
		break;
	case 118: x = 54;
		break;
	case 119: x = 55;
		break;
	case 120: x = 56;
		break;
	case 121: x = 57;
		break;
	case 122: x = 65;
		break;
	}

	return x;
}

char checkChar(int i, long int j) {
	char x;//= 48;
	if (i >= 48 && i <= 57) {
		x = changeCharCase1(i);
	}
	else if (i >= 65 && i <= 77) {
		x = changeCharCase2(i);
	}
	else if (i >= 78 && i <= 90) {
		x = changeCharCase3(i);
	}
	else if (i >= 97 && i <= 109) {
		x = changeCharCase4(i);
	}
	else if (i >= 110 && i <= 122) {
		x = changeCharCase5(i);
	}
	return x;
}
int main()
{
	char input[MAX]; // an input string
	cout << "Enter String :" << endl;
	cin >> input;	// taking input of string
	int inputLength = strlen(input); // length of input string = inputLength
	vector<char>output;		//char vector output is declared
	output.resize(inputLength); // vector output resized according to length of output = length of output. To conserve memory
	long int ite = 0; // iterator ite
	for (ite = 0; ite < inputLength; ite++) {
		output[ite] = checkChar(input[ite], ite);
	}
	cout << "Your input is encrypted as : " << endl;
	for (ite = 0; ite < inputLength; ite++) {
		cout << output[ite];
	}
	return 0;
}
