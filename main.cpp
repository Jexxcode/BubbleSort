#include <iostream>

using namespace std;

void bubbleSort(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    string arr[] = {"abc", "aab", "aaa", "bca", "cab", "cba", "sildjh"};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (const string &str : arr)
    {
        cout << str << " ";
    }

    return 0;
}
