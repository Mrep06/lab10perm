//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string text;
    float sum = 0;
    int count = 0;
    float SD = 0;
    while(getline(source,text)){
        sum += atof(text.c_str());
        count++;
    }
    source.close();
    source.open("score.txt");
    float mean = sum/count;
    while(getline(source,text)){
        SD += (pow(atof(text.c_str())-mean,2))/float(count) ;
    }
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt(SD) << endl;
    return 0;
}