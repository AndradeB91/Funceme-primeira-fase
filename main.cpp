#include <stdio.h>
#include <iostream>
#include <string>

#include "ProvaDLL.h"

using namespace std;

int main(){
    Prova prova;
	string emails = prova.getEmail();
	cout << emails << endl;

}
