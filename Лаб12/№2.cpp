#include<iostream>
using namespace std;

int main() {
	int N;
	char C;
	cout << "Type current direction of the robot: ";
	cin >> C;
	cout << "Type the command 0, 1 or -1: ";
	cin >> N;
	switch (C) {
	case 'N':
		switch (N) {
		case 1:
			cout << "W";
			break;
		case 0:
			cout << "N";
			break;
		case -1:
			cout << "E";
			break;
		}
	}
	switch (C) {
	case 'W':
		switch (N) {
		case 1:
			cout << "S";
			break;
		case 0:
			cout << "W";
			break;
		case -1:
			cout << "N";
			break;
		}
	}
	switch (C) {
	case 'E':
		switch (N) {
		case 1:
			cout << "N";
			break;
		case 0:
			cout << "E";
			break;
		case -1:
			cout << "S";
			break;
		}
	}
	switch (C) {
	case 'S':
		switch (N) {
		case 1:
			cout << "E";
			break;
		case 0:
			cout << "S";
			break;
		case -1:
			cout << "W";
			break;
		}
	}
}