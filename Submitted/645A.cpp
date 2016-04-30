#include <bits/stdc++.h>
using namespace std;

string b, b1, b2, e, e1, e2;

int main()
{
  cin >> b1 >> b2 >> e1 >> e2;
  swap(b2[0], b2[1]);
//  cout<<b2<<endl;
  swap(e2[0], e2[1]);
//  cout<<e2<<endl;
  b = b1 + b2;
//  cout<<b<<endl;
  e = e1 + e2;
//  cout<<e<<endl;
  b.erase(b.find('X'), 1);
  e.erase(e.find('X'), 1);
  
  if((b + b).find(e) != string::npos)
	cout << "YES\n";
  else 
	cout << "NO\n";
  
}
