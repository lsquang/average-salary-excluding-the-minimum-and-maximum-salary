// average-salary-excluding-the-minimum-and-maximum-salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
double average(vector<int>& salary) {
    int min = salary[0];
    int max = salary[0];

    for (int value : salary) {
        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
    }
    int sum = 0;
    for (int value : salary) {
        if (value > min && value < max) {
            sum += value;
        }
    }

    return (double)sum / ((double)salary.size() - 2);

}
int main()
{
    vector<int> salary = { 4000, 3000, 1000, 2000 };
    cout << average(salary) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
