// 16.3hangman.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const int NUM = 26;
const string wordlist[NUM] = { "apiary", "beetle", "cereal",
"danger", "ensign", "florid", "garage", "health", "insult" ,
"jackal", "keeper", "loaner", "manage", "nonce", "onset",
"plaid", "quilt", "remote", "stolid", "train", "useful",
"valid", "whence", "xenon", "yearn", "zippy" };
int main()
{
	srand(time(0));
	char play;
	cout << "will you play a word game?<y/n>";
	cin >> play;
	while (play=='y')
	{
		string target = wordlist[rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "guess my secret word.it has" << length << "lstters , and you guess \n"
			<< "one letter at a time. you get" << guesses << "wwrong guesses\n";
		cout << "your world:" << attempt << endl;
		while (guesses>0 && attempt!=target)
		{

		}

	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
