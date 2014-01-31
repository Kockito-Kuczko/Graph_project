//created by Kockito Kuczko @2014

#include "constant.h"

int main() {
	cout << "Graph Utility v0.01" << endl;
    int graphSize, graphRealSize;
	int maxAdj, maxRealAdj;

	cout << endl << "Enter the size of the graph (number of vertices):" << endl;
	cin >> graphRealSize;
	while (cin.fail()) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Error! Please enter an integer:" << endl;
        cin >> graphRealSize;
	}

	graphSize = graphRealSize + 1;

    cout << "Enter number of maximum adjacents of each vertex:" << endl;

	cin >> maxRealAdj;
	while (cin.fail() || maxRealAdj >= graphRealSize) {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Error! Please enter an integer:" << endl;
        cin >> maxRealAdj;
	}

	maxAdj = maxRealAdj + 1;

	int defaultgr[graphSize][maxAdj];

	for(int x = 1; x < graphSize; x++) {
	    for (int y = 1; y < maxAdj; y++) {
	        cout << "Enter adjacent for vertex " << x << ":" << endl;
	        cin >> defaultgr[x][y];

	        //Force valid input
                if (cin.fail()) {
                    cout << "Error! Please enter an integer:" << endl;
                    cin.clear();
                    cin.ignore(256, '\n');
                    y = y - 1;
                }
                else if (defaultgr[x][y] < 1 || defaultgr[x][y] > graphRealSize) {
                    cout << "No such vertex. You must enter a number between 1 and " << graphRealSize << ":" << endl;
                    y = y - 1;
                }

            //Warn about loop edges
                if ((defaultgr[x][y] == x)) {
                cout << "No loop edges allowed, please enter another vertex:" << endl;
                y = y-1;
                }

            //Warn about mupltiple edges
                for (int i = 1; i < y; i++){
                    if (defaultgr[x][i] == defaultgr[x][y]) {
                        cout << "No multiple edges allowed, please enter another vertex:" << endl;
                        y = y-1;
                    }
                }


        }
	}

	cout << endl << endl << "Adjacency list:" << endl;

	for (int x = 1; x < graphSize; x++){

	    cout << endl << "Vertex " << x << ":" << endl;

        for (int y = 1; y < maxAdj; y++){
            cout << defaultgr[x][y];
            if (y < maxRealAdj){
                cout << ", ";
            }
        }
	}

	cout << endl;

	return 0;
}
