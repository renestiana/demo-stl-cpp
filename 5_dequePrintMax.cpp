#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int cluster){
	//Write your code here.
    std::deque<int> myDeque(cluster);
    
    int it;
    for (it = 0; it < cluster; ++it)
    {
        while ((!myDeque.empty()) && arr[it] >=arr[myDeque.back()]){           
            myDeque.pop_back();
        }
 
        myDeque.push_back(it);        
    }
 
    for (; it < n; ++it)
    {
        cout << arr[myDeque.front()] << " ";
        while ((!myDeque.empty()) && myDeque.front() <= it - cluster){
            myDeque.pop_front();
        }
        while ((!myDeque.empty()) && arr[it] >=arr[myDeque.back()]){
            myDeque.pop_back();        
        }
        myDeque.push_back(it);      
    }
    cout << arr[myDeque.front()] << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,cluster;
    	cin >> n >> cluster;
    	int it;
    	int arr[n];
    	for(it=0;it<n;it++)
      		cin >> arr[it];
    	printKMax(arr, n, cluster);
    	t--;
  	}
  	return 0;
}
