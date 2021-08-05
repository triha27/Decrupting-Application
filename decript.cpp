#include <bits/stdc++.h>
using namespace std;
string decript(string msg, int shift)
{
    string decriptedMsg = "";
    for(char ch : msg)
    {
        char temp = ch - shift;
        if((temp >= 'a' && temp<= 'z') || (temp>= 'A' && temp<='Z'))
        decriptedMsg += (ch - shift);
        else
        decriptedMsg += (ch + 26 - shift);
    }
    return decriptedMsg;
}
int main()
{
    cout << decript ("abt",3);
    return 0;
}