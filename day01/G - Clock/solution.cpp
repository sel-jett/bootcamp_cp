#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int toMinutes(string str)
{
    char *token;
    token = strtok((char *)(str.c_str()), ":");
    int min = atoi(token) * 60;

    while (token != NULL)
    {
        token = strtok(NULL, ":");
        if (token)
            min += atoi(token);
    }
    return (min);
}

void solve ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int palindroms[] =  {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

    int t, a = 0;
    cin >> t;
    vector<string> vstr(t);
    vector<int> vint(t);
    for (int i = 0; i < t; i++)
    {
        cin >> vstr[i] >> vint[i] ;
    }
    int max;
    for (int i = 0; i < t; i++)
    {
        max = 0;
        a = 0;
        while ((toMinutes(vstr[i]) + a) < 1440)
        {
            for (size_t j = 0; j < 16; j++)
            {
                if ((toMinutes(vstr[i]) + a) == palindroms[j])
                {
                    max++;
                }
            }
            a += vint[i]; 
        }
        a = vint[i];
        while ((toMinutes(vstr[i]) - a) >= 0)
        {
            for (size_t j = 0; j < 16; j++)
            {
                if ((toMinutes(vstr[i]) - a) == palindroms[j])
                {
                    max++;
                }
            }
            a += vint[i]; 
        }
        cout << max << "\n";
    }
}

int main ()
{
    solve();
    return (0);
}