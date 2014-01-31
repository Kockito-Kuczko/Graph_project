//created by Kockito Kuczko @2014

#include "constant.h"
#include "defaultgr.h"
#include <ctype.h>
#include <string>

bool checkIfNumber(string i);
bool checkExistingEdge();

int main() {
	cout << "Graph Utility v0.01" << endl;

	cout << "\n Default graph edges:" << endl;
	for(int x = 0; x < 4; x++) {
	    for (int y = 0; y < 2; y++) {
	        cout << "Enter two adjacents for vertex " << x + 1 <<  endl;
	        cin >> defaultgr[x][y];

	        //Force valid input
                if (cin.fail() ) {
                    cout << "Error! Please enter a number:" << endl;
                    cin.clear();
                    cin.ignore(256, '\n');
                    y = y - 1;
                }

                if (defaultgr[x][y] < 0 || defaultgr[x][y] > 3) {
                    cout << "Not a valid number. You must enter a number between 0 and " << "3" << ":" << endl;
                    y = y - 1;
                }

            //Warn about loop edges
                if ((defaultgr[x][y] == x)) {
                cout << "No loop edges allowed, please enter another vertex:" << endl;
                y = y-1;
                }


        }
	}

	cout << endl << endl << "Adjacency list:" << endl;

	for (int x = 0; x < 4; x++){

	    cout << endl << "Vertex " << x+1 << ":" << endl;

        for (int y = 0; y < 2; y++){
            cout << defaultgr[x][y];
            if (y < 1){
                cout << ", ";
            }
        }
	}

	cout << endl;

	return 0;
}

bool checkExistingEdge() {

}
