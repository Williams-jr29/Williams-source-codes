#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*Writing to a file, output.txt file will be created if it does not exist in the directory of this source file*/
    ofstream outfile("output.txt");
    outfile << "We need money, Arthur!" << endl;
    outfile.close();

    //reading from file
    ifstream infile("output.txt");
    string content;
    while (std::getline(infile, content)) 
    {
        cout << content << endl;
    }
    infile.close();//Close the file after reading its contents

    return 0;
}