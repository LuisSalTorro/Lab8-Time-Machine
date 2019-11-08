#include <iostream>
using namespace std;

class CPresent{
    struct fifth_dimension{

    };

};
class CFuture{
private:
    struct fifth_dimension{ //time?
        int remaining_life_span; //ask user life span
        int alive;
        int year_in_future;
    };
    CPresent present;
public:
    void decide_the_future();

};
class CTimeMachine{
private:

public:
    void API();
};

void CTimeMachine::API() {
    CPresent present, *presentPointer;
    CFuture future, *futurePointer; //the number of future objects depends on how many are alive
    presentPointer = &present;
    futurePointer = &future;
    //pass the *present into future

}

int main() {
    CTimeMachine timeMachine;
    timeMachine.API();
    return 0;
}