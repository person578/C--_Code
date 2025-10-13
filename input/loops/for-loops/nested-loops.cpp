#include <iostream>
using namespace std;

int main()
{

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            cout << j << ' ';
            if(j == 10){
                cout << endl;
            }
        }
    }

    

    return 0;
}