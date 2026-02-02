#include <iostream>
using namespace std;
int main() 
{
int n, arr;
cout << "Enter size: ";
cin >> n;
int a[n];
cout << "Enter elements in ascending order: ";
for(int i = 0; i < n; i++) 
cin >> a[i];
cout << "Enter element to search: ";
cin >> arr;
int low = 0;
int upper = n - 1;
int mid;
int pos = -1;
while(low <= upper) 
{
mid = (low + upper) / 2;  
if(a[mid] == arr) 
{
pos = mid;
break;
}
else if(arr > a[mid]) 
{
low = mid + 1;
}
else 
{
upper = mid - 1;     
}
}
if(pos != -1)
cout << "Element present at index: " << pos;
else
cout << "Element not present";
return 0;
}
