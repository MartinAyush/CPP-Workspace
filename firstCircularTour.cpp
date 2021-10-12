#include<bits/stdc++.h>
using namespace std;

// first circular tour

class petrolPump{
    public:
        int petrol;
        int distance;
};

void naive(vector<int> p, vector<int> d){
    int ans = 0, curr_pet = 0, prev_pet = 0;
    for(int i = 0; i < p.size(); i++){
        curr_pet += (p[i]-d[i]);
        if(curr_pet < 0){
            ans = i+1;
            prev_pet = curr_pet;
            curr_pet = 0;
        }
    }
    cout << ((curr_pet+prev_pet) >= 0 ? (ans+1) : -1);
}

// incomplete
void optimal(petrolPump p[], int n){
    int start = 0;
    int end = 1;
    int curr_pet = p[start].petrol - p[start].distance;
    while(start != end || curr)
}

int main(){
    vector<int> petrol = {4, 8, 7, 4};
    vector<int> dist = {6, 5, 3, 5};
    petrolPump p[] = {{6, 4}, {3, 6}, {7, 3}};
    int n = 3;
    // optimal(petrol, dist);
    optimal(p, n);
    return 0;
}