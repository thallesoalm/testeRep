#include <iostream>
#include <ctime>

using namespace std;

int main(){
int age;
int num;

srand(ntime(NULL));
cout << "Hello, world!" << endl;
cin >> age;

cout << "Sua idade eh: << age << endl;

num = rand()%100+1;
cout << "O numero sorteado eh: << num";
return 0;
}
