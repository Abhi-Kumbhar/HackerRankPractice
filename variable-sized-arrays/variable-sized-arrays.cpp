// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int fst, scd, arrSize = 0, num = 0 , num2 = 0;
    vector<vector<int>> outer;
    cin >> fst >> scd;
    for (int j = 0; j < fst; j++)
    {
        cin >> arrSize;
        vector<int> inside;
        while (inside.size() < arrSize && cin >> num)
        {
            inside.push_back(num);
        }
        outer.push_back(inside);
    }
    vector<int> temp;
    vector<int> vecToShow;
    int arrNo = 0;
    for (int j = 0; j < scd; j++)
    {
        cin >> arrNo >> num;
        temp = outer.at(arrNo);
        vecToShow.push_back(temp.at(num));
    }
    
    for(arrNo = 0;arrNo < vecToShow.size() ; arrNo++)
    {
        cout << vecToShow.at(arrNo) << endl;
    }

    return 0;
}


