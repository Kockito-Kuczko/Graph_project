//created by Kockito Kuczko @2014

#include "constant.h"
#include <vector>
#include "arrayTools.h"

int main() {
	cout << "Graph Utility v0.01" << endl << endl;

	int menu = 99;
	int graphSize, graphRealSize;
    int maxAdj, maxRealAdj;
    int defaultgr[1][1];

	while (menu != 0){
	    cout << endl << endl;
	    cout << "1 - About" << endl;
	    cout << "2 - Help" << endl;
	    cout << "3 - Create graph" << endl;
        cout << "4 - Show adjacency list" << endl;
        cout << "0 - Exit" << endl;
        cout << endl << "Enter selection: ";

        cin >> menu;

        if (menu == 1){
            cout << "\nCreated by Kockito Kuczko @2014" << endl;
            menu = 99;
        }

        if (menu == 2){
            cout << "\nComing soon..." << endl;
            menu = 99;
        }

        if (menu == 3){

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
            menu = 99;
        }

        if (menu == 4){
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
            menu = 99;
        }

        if (menu == 1986){
            cout << endl << "Great year! :)" << endl << endl;
            menu = 99;
        }

        if (menu == 0){
            cout << endl << "Thank you for using Graph Utility." << endl << "Good bye!" << endl;
        }

	}

	return 0;
}
