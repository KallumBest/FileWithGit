// FilesWithGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<cstring>
#include <iostream>  
#include <string>
using namespace std;

struct Shoes
{
	
	string brand;
	string material;
	string color;
	int size;
	int cost;
};
int main() {
	struct Shoes s[5];
	int i;

	for (i = 0; i < 5; i++) {                   		//taking values from user
		cout << "Shoes " << i + 1 << endl;
		cout << "Enter brand name" << endl;
		cin >> s[i].brand;
		cout << "Enter material" << endl;
		cin >> s[i].material;
		cout << "Enter color" << endl;
		cin >> s[i].color;
		cout << "Enter size" << endl;
		cin >> s[i].size;
		cout << "Enter cost" << endl;
		cin >> s[i].cost;
		cout << "\n";
	}

	for (i = 0; i < 5; i++) {							//printing values
		cout << "Shoes " << i + 1 << endl;
		cout << "Brand : " << s[i].brand << endl;
		cout << "Material : " << s[i].material << endl;
		cout << "Color : " << s[i].color << endl;
		cout << "Size : " << s[i].size << endl;
		cout << "Cost : " << s[i].cost << endl;
		cout << "\n";
	}
	return 0;
}
	