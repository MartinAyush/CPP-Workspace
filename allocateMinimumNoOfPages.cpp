#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &pages, int students, int barrier){
	int n = pages.size();
	int currStudents = 1;
	int currPages = 0;
	for(int i = 0; i < n; i++){
		if(pages[i] > barrier) return false;
		if(pages[i]+currPages > barrier){
			currStudents++;
			currPages += pages[i];
		}else{
			currPages += pages[i];
		}
	}
	if(currStudents > students){
		return false;
	}
	return true;
}

int allocate(vector<int> &pages, int students){
	int low = *min_element(pages.begin(), pages.end());
	int ans = -1;
	int high = accumulate(pages.begin(), pages.end(), 0); // sum of all array elements
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(isPossible(pages, students, mid)){
			ans = mid;
			high = mid - 1; // to find the minimum ans
		}else{
			low = mid + 1;
		}
	}
	return ans;
}

int main(){
    vector<int> pages = {12, 34, 67, 90};
    int students = 2;
    cout << allocate(pages, students);

    return 0;
}