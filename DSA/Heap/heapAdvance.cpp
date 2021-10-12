#include<bits/stdc++.h>
using namespace std;

// priority queue uses heap

// main purpose of heapify is to rearrange array so that
// head is the largest or smallest element in the array
// heapify works best when head is changed
// O(log(n))
void minHeapify(vector<int> &a, int n, int i){
    int node = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    // if left node is lesser than node;
    if(left < n && a[left] < a[node]){
        node = left;
    }
    // if right node is lesser than node
    if(right < n && a[right] < a[node]){
        node = right;
    }
    // if smallest value is not the node itself
    if(node != i){
        swap(a[i], a[node]);
        minHeapify(a, n, node);
    }
}

void maxHeapify(vector<int> &a, int n, int i){
    int node = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    // if left node is greater than node;
    if(left < n && a[left] > a[node]){
        node = left;
    }
    // if right node is greater than node
    if(right < n && a[right] > a[node]){
        node = right;
    }
    // if largest value is not the node itself
    if(node != i){
        swap(a[i], a[node]);
        maxHeapify(a, n, node);
    }
}

void buildMinHeap(vector<int> &a, int n){
    for(int i = (n-2)/2; i >= 0; i--){
        minHeapify(a, n, i);
    }
}
void buildMaxHeap(vector<int> &a, int n){
    for(int i = (n-2)/2; i >= 0; i--){
        maxHeapify(a, n, i);
    }
}

void heapSort(){
    // in ascending order
    vector<int> a(1000);
    for(int i = 0; i < 1000; i++){
        a[i] = rand()%1000;
    }
    int n = a.size();

    buildMinHeap(a, n);
    for(int i = n-1; i >= 0; i--){
        swap(a[0], a[i]);
        minHeapify(a, i, 0); // call heapify for reduced array --> i == [n-i where i starts from 0];
    }

    for(int x : a){
        cout << x << " ";
    }
}

// Purchase Max items with given sum;
// naive = sort and check if curr element can be selected;
void purchaseMaxItem(){
    vector<int> a = {20, 10, 5, 30, 100};
    int sum = 35;
    buildMinHeap(a, a.size());
    int i = 0;
    while(sum > 0){
        if(a[0] <= sum){
            sum -= a[0];
            swap(a[0], a[a.size()-i]);
            minHeapify(a, a.size()-i, 0);
            i++;
        }
    }
    cout << i << '\n';
}

// K Largest Element in the array;
void kLargestElement(){
    vector<int> a = {5, 15, 10, 20, 8};
    int n = a.size();
    int k = 2;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(a[i]);
    }
    for(int i = 0; i < k; i++){
        cout << pq.top() << " ";
        pq.pop();
    }
}
// Sort a K sorted Array
void kSortedArray(){
    vector<int> a = {9, 8, 7, 19, 18};
    int n = a.size();
    int k = 2;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i <= k; i++){
        pq.push(a[i]);
    }
    int idx = 0;
    for(int i = k+1; i < n; i++){
        a[idx++] = pq.top();
        pq.pop();
        pq.push(a[i]);
    }
    while(!pq.empty()){
        a[idx++] = pq.top();
        pq.pop();
    }
    for(auto x : a){
        cout << x << " ";
    }
}

// merge K sorted array
// O(n*K*log(k))
class Node{
    public:
        int data, arrayPos, valPos;
        Node(int d, int ap, int vp){
            data = d;
            arrayPos = ap;
            valPos = vp;
        }
};

class MyCmp{
    public:
        bool operator()(Node n1, Node n2){
            return n1.data > n2.data;
        }
};

void mergeKSorted(){
    vector<vector<int>> a = {{10, 20}, {5, 15}, {4, 9, 11}};
    priority_queue<Node, vector<Node>, MyCmp> pq; // min heap
    vector<int> ans;
    int k = 3; // no of sub array
    for(int i = 0; i < a.size(); i++){
        Node n(a[i][0], i, 0);
        pq.push(n);
    }
    while(!pq.empty()){
        Node x = pq.top();
        pq.pop();
        ans.push_back(x.data);
        int ap = x.arrayPos;
        int vp = x.valPos;
        if(vp+1 < a[ap].size()){
            Node n(a[ap][vp+1], ap, vp+1);
            pq.push(n);
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
}

// Median of stream
// O(n*log(n))
void printMedians(vector<int> a, int n){
    priority_queue<int> s; // max heap contains smaller half of the array
    priority_queue<int, vector<int>, greater<int>> g; // min heap contains greater half of the array
    s.push(a[0]);
    cout << s.top() << " ";
    for(int i = 1; i < n; i++){
        int x = a[i];
        if(s.size() > g.size()){
            if(s.top() > x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            cout << (s.top()+g.top())/2.0 << " ";
        }else{
            if(x <= s.top()){
                s.push(x);

            }else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout << s.top() << " ";
        }
    }
}

int main(){
    // heapSort();
    // kLargestElement();
    // mergeKSorted();

    




    return 0;
}