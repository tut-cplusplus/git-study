#include <iostream>
#include <string>
using namespace std;

void printString(string);
//コメント
int main(int argc, char** argv)
{
	cout << "hello, world!" << endl;

	getchar();

	string str = "abcde";
	printString(str);

	//更新したぜ
	cout << "Updated" << endl;

	return 0;
}

/** 文字列を出力する関数
 *
 * str：出力する文字列
 * 返り値なし
 */
void printString(string str) {
	cout << str << endl;
}
