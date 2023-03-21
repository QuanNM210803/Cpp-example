#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;
main(){
	char sourceFile[100], targetFile[100];
	cout << "Ten tep tin nguon: ";
	cin >> sourceFile; 
	cout << "Ten tep tin dich: ";
	cin >> targetFile; 
	ifstream fileIn(sourceFile, ios::in);
	if(!fileIn){ 
		cout << "Khong the mo duoc tep tin nguon "<< sourceFile << endl;
		exit(1);
	}
	ofstream fileOut(targetFile, ios::out);
	if(!fileOut){ 
		cout << "Khong the tao duoc tep tin dich "<< targetFile << endl;
		exit(1);
	}
	string data;
	while(fileIn){
		getline(fileIn, data);
		fileOut << data<<endl;
	}
	fileIn.close();
	fileOut.close();
}
