#include <iostream>
using namespace std;

enum TrafficLight {
    Red,
    Yellow,
    Green
};

void printInstruction(TrafficLight light) {
    switch (light) {
        case Red:
            cout << "Red: STOP" << endl;
            break;
        case Yellow:
            cout << "Yellow: GET READY" << endl;
            break;
        case Green:
            cout << "Green: GO" << endl;
            break;
    }
}

int main() {
    
    TrafficLight light = Red;

    
    for (int cycle = 0; cycle < 3; ++cycle) {
        for (int i = 0; i < 3; ++i) {
            printInstruction(light);

            light = static_cast<TrafficLight>((light + 1) % 3);
        }
        cout << "---- End of Cycle " << cycle + 1 << " ----\n";
    }

    return 0;
}