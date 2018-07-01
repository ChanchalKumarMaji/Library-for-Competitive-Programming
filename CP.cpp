
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack> 
#include<queue>
#include<algorithm> 

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

// Common memset settings
//memset(memo, -1, sizeof memo);    // initialize DP memoization table with -1
//memset(arr, 0, sizeof arr);    // to clear array of integers


//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "VECTOR" objects 
template<typename T>
ostream& operator << (ostream& o, const vector<T>& v){
    o << "[ ";
    for(int i=0; i<v.size(); i++){
        o << v[i];
        if(i != v.size()-1)
            o << ", ";  
    }     
    o << " ]"; // To include new lines in 2d vectors put " o << " ]\n" " 
    return o;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "SET" elements 
template<typename T>
ostream& operator << (ostream& o, const set<T>& s){
    o << "[ ";
    for(auto it : s){
        o << it;
        if(it != *s.rbegin())
            o << ", ";
    }
    o << " ]";
    return o;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "MAP" elements 
template<typename T, typename S>
ostream& operator << (ostream& o, const map<T, S>& m){
    for(auto it : m)
        o << it.first << " : " << it.second << "\n";
    return o;    
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "PAIR" class
template<typename T, typename S>
ostream& operator << (ostream& o, const pair<T, S>& p){
    o << "( ";
    o << p.first << ", " << p.second << " )";
    return o;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "STACK" objects 
template<typename T>
ostream& operator << (ostream& o, const stack<T>& s){
    o << "[ ";
    stack<T> temp = s;
    while(!temp.empty()){
        o << temp.top();
        temp.pop(); 
        if(temp.size() >= 1)
            o << ", ";  
    }
    o << " ]";
    return o;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "QUEUE" objects
template<typename T>
ostream& operator << (ostream& o, const queue<T>& q){
    o << "[ ";
    queue<T> temp = q;
    while(!temp.empty()){
        o << temp.front();
        temp.pop(); 
        if(temp.size() >= 1)
            o << ", ";  
    }
    o << " ]";
    return o;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------
// Code to print "PRIORITY QUEUE" elements 
template<typename T>
ostream& operator << (ostream& o, const priority_queue<T>& q){
    o << "[ ";
    priority_queue<T> temp = q;
    while(!temp.empty()){
        o << temp.top();
        temp.pop(); 
        if(temp.size() >= 1)
            o << ", ";  
    }
    o << " ]";
    return o;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------- 




int main(){
    
    priority_queue<int> q;
    for(int i=0; i<5; i++){
        int k;
        cin>>k;
        q.push(k);
        cout<<q<<endl; 
    }

return 0;
}






















