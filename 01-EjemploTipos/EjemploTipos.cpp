#include <iostream>
#include <cassert>
#include <string>

/**
 * EjemploTipos.cpp
 * Tipos de datos y assert
 * Tomas Desiderioscioli
 * 02/05/21
 */


using namespace std::literals;

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
    assert(2u==2u);
    assert(2u!=3u);
    assert(2u<=3u);
    assert(2u<=2u);
    assert(3u>=2u);
    assert(3u>=3u);
    assert(2u+2u == 4u);
    assert(2u-2u == 0u);
    assert(2u*2u == 4u);
    assert(2u/2u == 1u);
    assert(3u%2u == 1u);

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
    assert(21e-1==21e-1);
    assert(21e-1!=22e-1);
    assert(22e-1<=32e-1);
    assert(22e-1<=22e-1);
    assert(32e-1>=22e-1);
    assert(32e-1>=32e-1);
    assert(21e-1+21e-1 == 42e-1);
    assert(21e-1-21e-1 == 0e-1);
    assert(22e-1*20e-1 == 44e-1);
    assert(22e-1/22e-1 == 10e-1);

    //string
    assert("aa"s == "aa"s);
    assert("aa"s!="ab"s);
    assert("ab"s!="aaa"s);
    assert("a"s<="b"s);
    assert("ab"s<="ab"s);
    assert("b"s>="a"s);
    assert("aaa"s>="aaa"s);
    assert(("aa"s+"aa"s) == "aaaa"s);
    assert("aaaa"s.length() == 4);

    std::cout << "Todas las pruebas finalizaron con exito";
}

