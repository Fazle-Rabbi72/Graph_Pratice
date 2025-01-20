#include<bits/stdc++.h>
using namespace std;
class Pair
{
    public:
        int first ,second;
        
        void make_pair(int a,int b){
            first=a;
            second=b;
        }
};
int main()
{
    Pair p;
    p.make_pair(20,30);
    cout<<p.first<<" "<<p.second<<endl;
    
    return 0;
}