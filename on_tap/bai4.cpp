#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;
vector<string> tens{ "zero","one","two","three","four","five","six","seven","eight","nine" };
vector<string> teens{ "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
vector<string> teenss{ "","", "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };

string one_last_digit(int x) {
    string result = "";
    result += tens[x];
    return result;
}

string two_last_digit(int x) {
    string result = "";

    if (x < 20 && x >= 10) {
        result += teens[x - 10];
    }
    else {
        result += teenss[x / 10];
        if (x % 10 != 0) {
            result += "-" + tens[x % 10];
        }
    }

    return result;
}

string three_last_digit(int x) {
    string result = "";
    result += tens[x / 100] + " hundred ";
    if (x % 100 != 0) {
        result += two_last_digit(x % 100);
    }
    return result;
}

string read_hundreds(int x) {
    string result = "";
    if (x < 10) result += one_last_digit(x);
    else if (x < 100) result += two_last_digit(x);
    else if (x < 1000) result += three_last_digit(x);
    return result;
}

string read_thousand(int x) {
    string result = "";
    result += read_hundreds(x / 1000) + " thousand ";
    if ((x % 1000) % 1000 != 0) {
        result += read_hundreds(x % 1000);
    }
    return result;
}

string read_million(int x) {
    string result = "";
    result += read_hundreds(x / 1000000) + " million ";
    if (x % 1000000 != 0) {
        if ((x % 1000000) < 1000) result += read_hundreds((x % 1000000));
        else if ((x % 1000000) < 1000000) result += read_thousand((x % 1000000));
    }
    return result;
}

string read_number(int x) {
    string result = "";
    if (x < 1000) result += read_hundreds(x);
    else if (x < 1000000) result += read_thousand(x);
    else if (x < 1000000000) result += read_million(x);
    return result;
}

int main()
{
    int number;
    cin >> number;
    string result;
    int ans = abs(number);
    if (number > 0) cout << read_number(ans);
    else {
        result += "negative " + read_number(ans);
        cout << result;
    }
    return 0;
}