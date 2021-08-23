#include <iostream>

using namespace std;



class test

{

public:

virtual void example() = 0;

};

//////////////////////////////////////////////////////

class Ex1 :public test

{

public:

void example()

{

cout << "Dilshad";

}

};

/////////////////////////////////////////////////////

class Ex2 :public test

{

public:

void example()

{

cout << "Academy";

}

};

////////////////////////////////////////////////////

int main()

{

test* arr[2];

Ex1 e1;

Ex2 e2;

arr[0] = &e1;

arr[1] = &e2;

arr[0]->example();

arr[1]->example();

}