#include <iostream>
#include <iomanip>
using namespace std;

int* fill_array(int*array, int size) {
    for (int i = 0; i < size-1; i++) {
        array[i] = rand() % 50;
        cout << array[i] << ' ';
    }
    array[9] = 0;
    return array;
}

void a(int size)
{
    for (int i = 0; i < size; ++i) {
        if (i > 0) cout << setw(i) << ' ';
        for (int j = 0; j < size - i; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}
void b(int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}
void c(int size)
{
    for (int i = 0; i < size; ++i) {
        if (i > 0) cout << setw(i) << ' ';
        for (int j = 0; j < (size - i) * 2; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}
void d(int size)
{
    for (int i = size; i > 0; --i) {
        if (i > 1)cout << setw(i - 1) << ' ';
        for (int j = 0; j < (size - (i - 1)) * 2; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

void figure(char fig) {
    int size = 5;
    if (fig == 'a') {
        cout << endl;
        a(size);
        cout << endl;
    }
    else if (fig == 'b') {
        cout << endl;
        b(size);
        cout << endl;
    }
    else if (fig == 'c') {
        cout << endl;
        c(size);
        cout << endl;
    }
    else if (fig == 'd') {
        cout << endl;
        d(size);
        cout << endl;
    }
    else if (fig == 'e') {
        cout << endl;
        c(size);
        d(size);
        cout << endl;
    }
}

int main()
{
    /* #1
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) cout << i << ' ';
    }*/

    /* #2
    int num1, num2, min;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    num1 <= num2 ? min = num1 : min = num2;
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) cout << i << ' ';
    }*/

    //3
    srand(time(nullptr));
    const int size = 10;
    int array[size], max=-1, min=51, max_index, scnd_max=-1;
    fill_array(array, size);
    cout << 0 << endl;
    for (int i = 0; i < size; i++) {
        if (array[i]> max) {
            max = array[i];
            max_index = i;
        }
        if (array[i] <= min) {
            if (array[i]!=0) min = array[i];
        }
    }
    array[max_index] = -1;
    for (int i : array) if (i > scnd_max) scnd_max = i;
    cout << "The biggest number = " << max << ", the smallest number = " << min << ", the second biggest number = " << scnd_max<<endl;
 // #4
    /*for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == j) cout << '*';
            else if (i == 3) cout << '*';
            else if (j == 3) cout << '*';
            else if (i + j == 6) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }*/
    /* // #5
    while (true) {
        char fig;
        cout << "Which figure would you like to print? a/b/c/d/e. Print 'q' to quit." << endl;
        cin >> fig;
        fig=tolower(fig);
        if (fig == 'q') break;
        switch (fig) {
        case 'a': figure('a'); break;
        case 'b': figure('b'); break;
        case 'c': figure('c'); break;
        case 'd': figure('d'); break;
        case 'e': figure('e'); break;
        default: cout << "Non-existant argument" << endl; break;
        }
    }*/
}

