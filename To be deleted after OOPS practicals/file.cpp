#include <iostream>
#include <fstream> // has all the file io stream objects, supports ifstream, ofstream and fstream

using namespace std;

void ssort(int arr[], int len)
{
    for (int i = 0; i < 8; i++)
    {
        int current_smallest = i, flag = 0;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[current_smallest])
            {
                current_smallest = j;
                flag = 1;
            }
        }
        if (current_smallest != i)
        {
            int temp = arr[i];
            arr[i] = arr[current_smallest];
            arr[current_smallest] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr1[5], arr2[3], arr3[7];
    ofstream fopen;
    fopen.open("File1.txt");
    cout << "Enter 5 numbers to be stored in File1\n";
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];          // takes input and stores in the array
        fopen << arr1[i] << " "; // writes to file1
        arr3[count++] = arr1[i]; // simultaneously stored in the third array
    }
    fopen.close();
    fopen.open("File2.txt");
    cout << "Enter 3 elements to be stored in File2\n";
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
        fopen << arr2[i] << " ";
        arr3[count++] = arr2[i];
    }
    fopen.close();
    ssort(arr3, 8);
    cout << "Contents of arr3 are: ";
    for (int i = 0; i < 8; i++)
        cout << arr3[i] << endl;
    fopen.open("File3.txt");
    for (int i = 0; i < 8; i++)
        fopen << arr3[i] << " ";
    fopen.close();
    cout << "Contents of File 3 are\n";
    ifstream fin;
    fin.open("File3.txt");
    while (!fin.eof())
    {
        int x;
        fin >> x;
        fin.get();
        cout << x << endl;
    }
    return 0;
}
