#include <iostream>
#include <cassert>
#include <string>

/**
 * EjemploTipos.cpp
 * Tipos de datos y assert
 * Tomas Desiderioscioli
 * 02/05/21
 */

using std::string;

int main() {

    //bool
    assert(true == true);
    assert(true != false);
    assert(true || true);
    assert(true || false);
    assert(false || true);
    assert((false || false) == false);
    assert(true && true);
    assert((true && false) == false);
    assert((false && true) == false);
    assert((false && false) == false);
    assert(!false);
    assert(!true == false);

    //char
    assert('A'=='A');
    assert('A'!='B');
    assert('A'<='B');
    assert('A'<='A');
    assert('B'>='A');
    assert('B'>='B');
    assert('2'+'2' == 'd');
    assert('d'-'2' == '2');
    assert('2'*2 == 'd');
    assert('d'/2 == '2');
    assert('2'%'2' == 0);

    //unsigned int
    assert(2==2);
    assert(2!=3);
    assert(2<=3);
    assert(2<=2);
    assert(3>=2);
    assert(3>=3);
    assert(2+2 == 4);
    assert(2-2 == 0);
    assert(2*2 == 4);
    assert(2/2 == 1);
    assert(3%2 == 1);

    //signed int
    assert(-1==-1);
    assert(-1!=-2);
    assert(-3<=-2);
    assert(-3<=-3);
    assert(-2>=-3);
    assert(-2>=-2);
    assert((-2)+(-2) == -4);
    assert((-2)-(-2) == 0);
    assert(-2*2 == -4);
    assert(-2/2 == -1);
    assert((-3)%(-2) == -1);

    //double
    assert(2.1==2.1);
    assert(2.1!=2.2);
    assert(2.2<=3.2);
    assert(2.2<=2.2);
    assert(3.2>=2.2);
    assert(3.2>=3.2);
    assert(2.1+2.1 == 4.2);
    assert(2.1-2.1 == 0);
    assert(2.2*2 == 4.4);
    assert(2.2/2.2 == 1);

    //string
    //consigna referida a la clase string de std o a char[]?
    string s1 = "aa";
    string s2 = "ab";
    string s3 = "aaa";
    string s4 = "aaaa";

    assert(s1==s1);
    assert(s1!=s2);
    assert(s1!=s3);
    assert(s1<=s3);
    assert(s1<=s1);
    assert(s3>=s1);
    assert(s3>=s3);
    assert((s1+s1) == s4);
    assert(s4.length() == 4);


    printf("Todas las pruebas finalizaron con exito");
}

