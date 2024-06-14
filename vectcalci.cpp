#include <iostream>
#include <vector>
using namespace std;

int main() {
    float sum = 0;
    float mult = 1;
    float div = 1;
    int operation;

    cout << "Choose operation no :\n 1 + addition\n 2 - subtraction\n 3 * multiplication\n 4 / division\n enter operation no:";
    cin >> operation;

    if (operation == 1) {
        int n;
        cout << "Enter number of constants to be used:\n";
        cin >> n;
        vector<float> arr(n);

        cout << "Enter elements: \n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " + " << sum;
            sum += arr[i];
            cout << " = " << sum << endl;
        }
        cout << "\nSum of entered elements: " << sum;
    }

     if (operation == 2) {
        int n;
        cout << "Enter number of constants to be used:\n";
        cin >> n;
        vector<float> arr(n);

        cout << "Enter elements: \n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
int x=arr[0];
        for (int i = 0; i < n-1; i++) {
            cout << x << " - " <<arr[i+1];
            x=x-arr[i+1];

            cout << " = " << x << endl;
        }
        cout << "\nDiff  of entered elements: " << x;
    }

    if (operation == 3) {
        int n;
        cout << "Enter number of constants to be used:\n";
        cin >> n;
        vector<float> arr(n);

        cout << "Enter elements: \n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " * " << mult;
            mult *= arr[i];
            cout << " = " << mult << endl;
        }
        cout << "Product of entered elements: " << mult;
    }

    if (operation == 4) {
        vector<float> arr(2);
        cout << "Enter 2 constants to be used:\n";
        for (int i = 0; i < 2; i++) {
            cin >> arr[i];
        }

        cout << "In form num1 / num2\n";
        cout << arr[0] << " / " << arr[1];
        div = arr[0] / arr[1];
        cout << " = " << div << endl;

        int remainder = int(arr[0]) % int(arr[1]);
        cout << "Dividend of entered elements: " << div << endl;
        cout << "Remainder of entered elements: " << remainder;
    }
    return 0;
}

