#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3};

    int mm = *max_element(a.begin(), a.end());
    int mi = *min_element(a.begin(), a.end());

    cout << "Max is : " << mm << "\n";
    cout << "Min is : " << mi << "\n";

    return 0;
}