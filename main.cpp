#include <iostream>
using namespace std;

class CFuture{
public:
    struct fifth_dimension{ //time?
        string name;
        int remaining_life_span; //ask user life span
        int alive;
        int year_in_future;
    };
    void decide_the_future();
};

class CPresent{
public:
    void biologicalClock(CFuture::fifth_dimension dimension);
};

class CTimeMachine{
public:
    void API();
};

void CTimeMachine::API() {
    CPresent present, *presentPointer;
    CFuture future, *futurePointer; //the number of future objects depends on how many are alive
    presentPointer = &present;
    futurePointer = &future;
    futurePointer->decide_the_future();
    //pass the *present into future

}

void CFuture::decide_the_future()
{
    fifth_dimension dimension, *dimensionPointer;
    dimensionPointer = &dimension;

    int input;
    cout << "how many people are there" << endl;
    cin >> input;
    dimensionPointer = new fifth_dimension[input];

    for (int i = 0; i < input; i++)
    {
        cout << "What is Luke's lifespan" << endl;
        cin >> dimensionPointer[i].remaining_life_span;
        cout << "what is the future year" << endl;
        cin >> dimensionPointer[i].year_in_future;
        cout << "Does Darth Vader kill or spare Luke (0/1)" << endl;
        cin >> dimensionPointer[i].alive;
    }
}

void CPresent::biologicalClock(CFuture::fifth_dimension dimension)
{
    for (int i = 0; i < dimension.remaining_life_span; i++)
    {
        if(dimension.remaining_life_span > 0)
        {
            cout << "alive: " << dimension.name << "has "
            << dimension.remaining_life_span << " years left" << endl;
        }
        else
        {
            cout << "darth vader decided to kill" << dimension.name << endl;
        }
    }
}

int main() {
    CTimeMachine timeMachine;
    timeMachine.API();
    return 0;
}