#include <iostream>
#include <fstream>
#include <string>

/**
 * Extra.cpp
 * output.txt programaticamente
 * Tomas Desiderioscioli
 * 15/04/21
 */

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
