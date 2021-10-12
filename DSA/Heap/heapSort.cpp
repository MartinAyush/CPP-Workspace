#include<bits/stdc++.h>
using namespace std;

// main purpose of heapify is to rearrange array so that 
// head is the largest or smallest element in the array
// heapify works best when head is changed
// O(log(n))
void heapify(vector<int> &a, int n, int i){
    int node = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    // if left node is greater than node;
    if(left < n && a[left] < a[node]){
        node = left;
    }
    // if right node is greater than node
    if(right < n && a[right] < a[node]){
        node = right;
    }
    // if largest value is node itself then no swap
    // if largest value is not the node itself
    if(node != i){
        swap(a[i], a[node]);
        heapify(a, n, node);
    }
}

void buildHeap(vector<int> &a, int n){
    for(int i = (n-2)/2; i >= 0; i--){
        heapify(a, n, i);
    }
}

int main(){
    
    vector<int> a(100);
    for(int i = 0; i < 100; i++){
        a[i] = rand()%100;
    }
    int n = a.size();
    
    buildHeap(a, n);
    for(int i = n-1; i >= 0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0); // call heapify for reduced array
    }

    for(int x : a){
        cout << x << " ";
    }

    return 0;
}