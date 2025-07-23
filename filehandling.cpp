#include <iostream>
#include <fstream>
using namespace std;

int main() {
ifstream infile;
infile.open("radhe.txt"); // Open in read mode

if (infile.is_open()) {
cout << "File opened successfully for reading.\n";
infile.close();
} else {
cout << "Failed to open file.\n";
}

return 0;
}