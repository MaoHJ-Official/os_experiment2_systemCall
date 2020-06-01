#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	// sourceData destinationData
	string source, destination;
	cout<<"以“源文件 目标文件”格式输入"<<endl;
	cin >> source >> destination;

	fstream input(source, ios::in);
	if (!input) {
		cout << "打开文件失败！" << source << endl;
		exit(1);
	}
	fstream output(destination, ios::out);
	if (!output) {
		cout << "打开文件失败！" << destination << endl;
		exit(1);
	}

	output << input.rdbuf();

	cout<<"拷贝完毕！"<<endl;
	input.close();
	output.close();
	return 0;
}
