#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    file.open("binSample.dat", ios_base::out | ios_base::binary);
    if (!file.is_open())
    {
        cout << "Unable to open the file for writing\n";
        return 0;
    }
    string myStr = "Anushka Pande";
    file.write(myStr.data(), myStr.size());
    file.close();
    file.open("binSample.dat", ios_base::in | ios_base::binary); // Reading binary
    if (!file.is_open())
    { // data from the file
        cout << "Unable to open the file for reading\n";
        return 0;
    }
    // Get the length of the file
    file.seekg(0, ios::end);
    streampos size = file.tellg();
    file.seekg(0, ios::beg);
    string buffer(size, '\0'); // Read the binary data into a buffer
    file.read(&buffer[0], size);
    cout << "Binary data read from file: " << buffer << endl;
    file.close();
    return 0;
}