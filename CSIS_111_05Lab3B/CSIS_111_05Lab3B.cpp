// Joseph Uchida
// C++ program to illustrate the iterartors in vector
// https://www.geeksforgeeks.org/vector-in-cpp-stl/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g1; //declares the vector integer which is "g1"

	for (int i = 1; i <= 5; i++) //or i < 6 which stops at 5
		g1.push_back(i);
	g1.insert(g1.begin(), 61); //inserts number, 61, into the vectors at the beginning
	cout << "Numbes in vector: \n";
	for (int i = 0; i < g1.size(); i++) // numbers in size are going to range from 1 to 5 as in loop above in line 12
		cout << g1[i] << " ";

	cout << "\n\nNumbers in reverse: \n";
	for (int i = g1.size() - 1; i >= 0; i--)
		cout << g1[i] << " ";

	cout << "\n\nEnd of program\n\n";
	system("pause");
	return 0;
}