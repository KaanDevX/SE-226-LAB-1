#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    using namespace std;
    int givenSecond;
    cout << "Give me seconds and I'll convert it to hours,minutes,seconds0" << endl;

    cin >> givenSecond;

    int hour, minute , second;
    second = 1;
    minute = 60 * second;
    hour = minute * 60;

    hour = givenSecond / 3600;
    minute = (givenSecond % 3600) / 60;
    second = givenSecond % 60;
    cout << hour << " Hour " << minute << " Minute " << second << " Second" << endl;

}