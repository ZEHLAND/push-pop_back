// ConsoleApplication1.cpp : Bu dosya 'main' iþlevi içeriyor. Program yürütme orada baþlayýp biter.
//
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>dizi;
    dizi.push_back(5);
    dizi.push_back(10);
    dizi.push_back(15);
    cout << "eleman sayisi:" << dizi.size() << endl;
    for (int s = 0; s < dizi.size(); s++) 
        cout << dizi[s] << endl;
    dizi.pop_back();
    
    for (int s = 0; s < dizi.size(); s++)
        cout << dizi[s] << endl;
    return 0;
}
