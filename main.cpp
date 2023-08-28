#include <iostream>
#include <math.h>

using namespace std;

//#include <bits/stdc++.h>
//int fp(vector<int> &arr, int n, int k) { 
//    int start = 0;
//    int end = n-1;
//    int ans = -1;
//    int mid = start+(end-start)/2;
//
//    while(start<=end){
//        if(arr[mid]==k){
//            ans = mid;
//            end = mid - 1;
//        }
//        if(arr[mid]<k){
//            start = mid + 1;
//        }
//        if(arr[mid]>k){
//            end = mid - 1;
//        }
//        mid = start + (end-start)/2;
//    } 
//    return ans;
//}
//int lp(vector<int> &arr, int n, int k) { 
//    int start = 0;
//    int end = n-1;
//    int ans = -1;
//    int mid = start+(end-start)/2;
//
//    while(start<=end){
//        if(arr[mid]==k){
//            ans = mid;
//            start = mid + 1;
//        }
//        if(arr[mid]<k){
//            start = mid + 1;
//        }
//        if(arr[mid]>k){
//            end = mid - 1;
//        }
//        mid = start + (end-start)/2;
//    } 
//    return ans;
//}
//pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
//{
//  pair<int,int> p;
//  p.first = fp(arr, n,  k);
//  p.second = lp(arr,  n,  k);
//  return p;
//}


//int binarysearch(int arr[], int size, int key){
//	int start = 0, c=0; 
//	int end = size-1;
//	
//	int mid = start + ((end-start)/2);
//	
//	while(start<=end){
//		if(arr[mid]==key){
////			return mid;
//			c++;
//		}
//		if(arr[mid]>key){
//			end = mid-1;
//		}
//		if(arr[mid]<key){
//			start = mid+1;
//		}
//		mid = start + ((end-start)/2);
//	}
//	return c;
//}
//
//int main(){
//
//int arr1[6] = {2,4,8,12,18,20};
//int arr2[6] = {3,7,11,17,19,23};
//int arr[7] = {1,2,3,3,3,3,5};
//
//int indexeven1 = binarysearch(arr1, 6, 20);
//int indexeven2 = binarysearch(arr1, 6, 30);
//
//int indexodd1 = binarysearch(arr2, 6, 3);
//int indexodd2 = binarysearch(arr2, 6, 11);
//
////cout<<indexodd1;
////cout<<indexodd2;
//
//cout<<binarysearch(arr, 7, 3);
//
//	return 0;
//}



int fp(int arr[], int n, int k) { 
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            end = mid - 1;
        }
        if(arr[mid]<k){
            start = mid + 1;
        }
        if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    } 
    return ans;
}
int lp(int arr[], int n, int k) { 
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            start = mid + 1;
        }
        if(arr[mid]<k){
            start = mid + 1;
        }
        if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    } 
    return ans;
}


//int povit(int arr[],int size){
//	int s=0, e = size-1;
//	int mid = s + (e-s)/2;
//	
//	while(s<e){
//		if(arr[mid]>=arr[0]){
//			s = mid + 1;
//		}
//		else{
//			e = mid;
//		}
//		mid = s + (e-s)/2;
//	}
//	return s;
//}


int povit(int arr[], int n){
	int start = 0; 
	int end = n-1;
	int mid = start - (end-start)/2;
	
	while(start<end){
		if(arr[mid]>=arr[0]){
			start = mid+1;
		}
		else{
			end = mid;
		}
		mid = start - (end-start)/2;	
	}
	return start;
}


int BinarySearch(int arr[], int start, int end, int target){
	int s = start;
	int e = end;
	int mid = s - (e + s)/2;
	
	while(s<=e){
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			s = mid +1;
		}
		else{
			e = mid-1;
		}
		mid = s - (e + s)/2;
	}
	return -1;
}



long long int bianrysearch(int n){
        int start = 0; 
        int end = n;
        long long int mid = start + (end-start)/2;
        long long int ans = -1;
        while(start<=end){
            long long int sqrt = mid*mid;

            if(sqrt == n){
                return mid;
            }            
            if(sqrt>n){
                end = mid-1;
            }
            if(sqrt<n){
                ans = mid;
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
    return ans;
}

double ansinfloat(int n, int times, int intans){
	double factor = 1;
	double ans = intans;
	
	for(int i=0; i<times; i++){
		factor = factor/10;
		for(double j=ans; j*j<n; j=j+factor){
			ans = j;
		}
	}
	return ans;
}


int main(){
//	int arr[6] = {7,9,11, 4, 6,7}; 
//	int key = 4, n=6;
//////   int arr[8] = {1,2,3,3,3,3,5, 5};
//////   int first = fp(arr, 8,  5);
//////   int last = lp(arr,  8,  5);
//////   int total = (last-first)+1;
//////   cout<<total;
////	cout<<povit(arr, 6);
//	int p = povit(arr, key);
//	if(arr[p]<=key && key<=arr[n-1]){
//		cout<<BinarySearch(arr, p, n-1, key);
//	}
//	else{
//		cout<<BinarySearch(arr, 0, p-1, key);	
//	}
int n;
cin>>n;
int intans = bianrysearch(n);
//double floatans =  ansinfloat(n, 3, intans);

cout<<"ANSWER INTEGER : "<<intans<<endl;
cout<<"FLOAT ANSWER : "<<ansinfloat(n, 3, intans)<<endl;

  return 0;
  
}















// SQRT OF X
//
//class Solution {
//public:
//    long long int bianrysearch(int n){
//        int start = 0; 
//        int end = n;
//        long long int mid = start + (end-start)/2;
//        long long int ans = -1;
//        while(start<=end){
//            long long int sqrt = mid*mid;
//
//            if(sqrt == n){
//                return mid;
//            }            
//            if(sqrt>n){
//                end = mid-1;
//            }
//            if(sqrt<n){
//                ans = mid;
//                start = mid+1;
//            }
//            mid = start + (end-start)/2;
//        }
//        return ans;
//    }
//
//    int mySqrt(int x) {
//         return bianrysearch(x);
//    }
//};



