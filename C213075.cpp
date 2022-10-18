#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    int n, i, f=0;
   ifstream file("input.txt");
   file >> n;
   file.close();


    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            f = 1;
            break;
        }
    }
    string output1, output2;
    if(f == 1)
    {
        //cout << "The Number is Not prime" << endl;
        output1 = "The Number is Not prime.";


    }
    else
    {
        //cout << "The Number is Prime" << endl;
        output1 = "The Number is Prime.";
    }

    ofstream file1;
    file1.open("output.txt");
    file1 << output1 << endl;
    file1.close();

    return 0;
}
