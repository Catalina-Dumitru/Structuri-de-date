#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main()
{
    string n;
    while (f >> n)
    {
        int an = stoi(n.substr(1, 2));
        int luna = stoi(n.substr(3, 2));
        int zi = stoi(n.substr(5, 2));
        int gen = stoi(n.substr(0, 1));
        if ((gen == 5) || (gen == 6))
            an = an + 2000;
        else if ((gen == 1) || (gen == 2))
            an = an + 1900;
        else if ((gen == 3) || (gen == 4))
            an = an + 1800;
        g << zi << "/" << luna << "/" << an << "   ";
        if (gen % 2 == 0)
            g << "Gen feminin";
        else g << "Gen masculin";
        g << endl << endl;
    }
    f.close();
    g.close();
    return 0;
}