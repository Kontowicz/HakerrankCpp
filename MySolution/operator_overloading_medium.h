#pragma once
#include <iostrem>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

class Matrix{
    public:
    vector<vector<int>> a;
    Matrix operator+(const Matrix&b){
        Matrix tmp;
        for(int i(0); i<b.a.size(); i++){
             vector<int> tmp_;
            tmp_.clear();
            for(int j(0); j<b.a[i].size(); j++){
                tmp_.push_back(a[i][j]+b.a[i][j]);
            }
            tmp.a.push_back(tmp_);
        }
        return tmp;
    }
};

void operator_overloading_medium(){
 int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
}