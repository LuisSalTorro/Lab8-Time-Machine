#include <iostream>
using namespace std;

class CPresent{

};
class CFuture{

};
class CTimeMachine{
private:

public:
    void API();
};

void CTimeMachine::API() {
    CPresent present, *presentPointer;
    CFuture future, *futurePointer;
    presentPointer = &present;
    futurePointer = &future;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}