#include<bits/stdc++.h>
using namespace std;

// Left = 2*i + 1
// right = 2*i + 2
// parent = (i-1)/2

class minHeap{
    public:
        int arr[];
        int size;
        int capacity;
        minHeap(int c){
            arr = new int[n];
            size = 0;
            capacity = c;
        }    
        int leftChild(int i){
            return 2*i+1; // return index of left child
        }
        int rightChild(int i){
            return 2*i+2; // returns index of left child
        }
        int parent(int i){
            return floor((i-1)/2); // returns index of parent of ith child
        }
        void insert(int x){
            if(size == capacity){
                return;
            }
            size++;
            arr[size-1] = x;
            for(int i= size - 1; i != 0 && arr[parent(i)] > arr[i];){
                swap(arr[parent(i)], arr[i]);
                i = parent(i);
            } 
        }
        void minHeapify(int i){
            int lt = leftChild(i);
            int rt = rightChild(i);
            int smallest = i;
            if(lt < size && arr[lt] < arr[smallest]){
                smallest = lt;
            }
            if(rt < size && arr[rt] < arr[smallest]){
                smallest = rt;
            }
            if(smallest != i){
                swap(arr[smallest], arr[i]);
                minHeapify(smallest);
            }
        }
        int extractminHeap(){
            if(size == 0){
                return INT_MAX;
            }
            if(size == 1){
                size--;
                return arr[0];
            }
            swap(arr[0], arr[size - 1]);
            size--;
            minHeapify(0);
            return arr[size];
        }
};

int main(){
    

    return 0;
}