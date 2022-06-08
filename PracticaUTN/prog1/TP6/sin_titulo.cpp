#include<iostream>
using namespace std;

int main() {
	int i;
	int vector[10];
	for (i=0;i<=9;i++) {
		vector[i] = 0;
	}
	for (i=0;i<=8;i+=2) {
		vector[i] = 1;
	}
	for (i=0;i<=9;i++) {
		cout << vector[i] << ", ";
	}
	cout<<endl;
	return 0;
}

