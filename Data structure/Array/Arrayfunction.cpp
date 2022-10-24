#include<iostream>
using namespace std;

void scanarray(int arr[], int n)
{
    cout << "Enetr the Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
}

void displayarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}

void addarray(int arr[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}

void productarray(int arr[], int n)
{
    int prod = 1;
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    cout << prod << endl;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter the Size of Array : ";
    cin >> n;

    scanarray(arr, n);

    cout << "Displaying Array " << endl;
    displayarray(arr, n);

    cout << "Displaying Sum of Elements of Array " << endl;
    addarray(arr, n);

    cout << "Displaying the Product of Array " << endl;
    productarray(arr, n);

    return 0;
}
