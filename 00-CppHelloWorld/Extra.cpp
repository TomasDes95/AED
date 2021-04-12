#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string FILENAME = "output.txt";
    std::string OUTPUT = "hola World!";
    std::cout << OUTPUT;
    std::ofstream myFile;
    myFile.open (FILENAME);
    myFile << OUTPUT;
    myFile.close();
    return 0;
}
