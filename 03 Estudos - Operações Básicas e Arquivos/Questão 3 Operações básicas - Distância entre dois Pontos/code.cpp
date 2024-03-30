#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main (){

    double x1, y1, x2, y2, distance;

    ifstream inputDoc ("entrada.txt");
    inputDoc >> x1 >> y1 >> x2 >> y2;
    inputDoc.close();
    distance = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
    cout << distance;
    return 0;
}