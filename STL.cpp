#include<bits/stdc++.h>
using namespace std;

//Pairs
void explainPair(){
    pair<int ,int> p = {1,3}; //it cvan be anything instead of int it can be char too

    cout<< p.first << " " << p.second<<endl;;

    pair<int, pair<int,int>> p2 = {1,{3,4}};
    cout << p2.second.second << " "<< p2.first <<endl;;

    pair<int,int> arr[]={{1,2},{2,5},{3,4}}; //{0,1,2}
    cout<<arr[1].second;
}

//Vectors
void explainVector(){
    
    vector<int> v; //creates empty container {}

    v.push_back(1); //{1}
    v.emplace_back(2); //similar to pushback ;{1,2}

    vector<pair<int,int>> vec; 

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); //{100,100,100,100,100}
    vector<int> v(5); //{garbage values,gv,gv,gv,gv}

    vector<int> v1(5,20); //{20,20,20,20,20}
    vector<int> v2(v1); // makes a copy of v1 in v2

    //accessing vectors
    // we can do like v[1] will show the value at first index. Second way is iterator
    //Iterator is nothing but points to memory where element is lying.
    vector<int>::iterator it=v.begin();
    it++;
    cout<< *(it) << " "; //* access the element at that memory

    it = it+2;
    cout << *(it) <<" ";

    vector<int>::iterator it=v.end(); //points to location that lies after last elemnt

    /* vector<int>::iterator it=v.rend(); //reverse end;
       vector<int>::iterator it=v.rbegin(); */


    //Printing The VEcotrs
    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back(); //element thatis at last


    for (vector<int>::iterator it =v.begin(); it!= v.end() ; it++)
    {
        cout<<*(it)<<" ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    for (auto it : v)
    {
        cout<<it<<" ";

    }

    //Deletion {10,20,12,23,35}
    v.erase(v.begin()+1); //will delete 20

    //v.erase(start,end)
    v.erase(v.begin()+2,v.begin()+4);//{10,20,35}

    //insertion

    vector<int>v(2,100); //{100,100}

    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1, 2,10); //{300,10,10,100,100}

    vector<int> copy(2, 50); //{50,50}
    v.insert(v.begin(), copy.begin() , copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout<< v.size(); //2
    cout<< v.pop_back(); //{10}

    v.clear(); //erases entire vector
    
}

void explainList(){

    list<int> ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(5);//{5,2,4} very cheap as compared to vector
    ls.emplace_front(); //{2,4}
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}
    
    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}


}

void explainStack(){

//LIFO
    stack<int> st;

    st.push(1);  //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); ////{5,3,3,2,1}

    cout<< st.top(); // print 5

    st.pop();// {3,3,2,1}

    cout<<st.top(); //3
    cout<<st.size();//4
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);

}

void explainQueue(){
    //fifo
    queue<int> q;

    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}

    q.back() +=5; //adds 5 to last one i.e 4+5=9

    cout<<q.back();//9
    // q {1,2,9}
    cout<<q.front();//1
    q.pop();//{2,9}
    cout<<q.front();//2

}

void explainPriorityQueue(){

    priority_queue<int>pq;

//Max Heap - greatest value will be at first
    pq.push(5); //{5}
    pq.push(2);//{5,2}
    pq.push(8);////{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top();//10
    
    pq.pop(); //{8,5,2}
    cout<<pq.top();//8

//Min Heap - lowest value is at first
    priority_queue<int, vector<int> , greater<int>> pq;

    pq.push(5); //{5}
    pq.push(2);//{2.5}
    pq.push(8);////{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top();//2

/*Time complexity
Push & Pop - O(logN)
Top O(1)
*/

}


//SET - everything is sorted and unique
void explainSet(){
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //{1,2,3,4,5}
    auto it=st.find(3); // it will return an iterator which points to 3
    auto it=st.find(6);//it will return set.end cause there is no 6 in set

    st.erase(5);
    //or
    auto it = st.find(3);
    st.erase(it);

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//(first last) {1,4,5}

//TC- O(logN)


}

void explainMultiSet(){
//same as set //sorted but not unique // only stores duplicater elemtns also

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);//{1,1,1}

    ms.erase(1);//will erase all 1's
    //but if we if you want to delete specic 1 say one 1 or two 1 then find the occurence using iterator and then erase that iterator

    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);//erases first two 1s
}

//Unordered Set
void explainUset(){
    //Unique but not sorted
    unordered_set<int> st;
}

//MAP
void explainMap(){
//it is key value pair // key is unique and in ssorted order
//map stored unique key in sorteed order

    map<int ,int> mpp; //<key,value>
    map< int,pair<int,int>> mpp;
    map<pair<int,int>, int> mpppp;

    mpp[1]=2; //{1,2}
    mpp.emplace(3,1); //{3,1}
    mpp.insert({2,4});

    mpppp[{2,3}]=10;//{{2,3},10}

    for (auto it : mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    cout<<mpp[1];//2
    cout<<mpp[5];//says null or 0 and points to mpp.end

    auto it = mpp.find(3); //will give the address
    cout<< it->second ;//it first gives the element{a,b} then print b




}

void explainMultimap(){
    //similar to map 
    //can store duplicate keys

}

void explainUnorderMap(){
    //not have duplicate but unsorted
}


bool comp(pair<int,int>p1 , pair<int,int>p2){
    //we will swap if condiutoon is false

    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //third conftion can be if they are same

    if(p1.first > p2.first) return true;
    return false;

}

void exmplainExtra(){
    int a;//let it be first element of array of n size
    int n;
    
    sort(a,a+n);    
    sort(a,a+n,greater<int>());//sorts in descending order
    sort(a+2,a+4);

    vector<int>v;
    sort(v.begin(),v.end());

    pair<int,int> a[] ={{1,2}, {2,1}, {4,1}};

    //sort it according to second elemment
    //if second element is same , then sort iti according to first element but in descending order

    sort(a,a+n,comp);
    //comp is a boo func written above void explainExtra
    //{{4,1},{2,1},{1,2}} 


    int num=7; //in binary it is 111
    int cnt = __builtin_popcount(num);//will display the no. of set bits in num i.e. 3

    long long num= 43567456732567;
    int cnt = __builtin_popcountll(num);

//if i havce a string and want to know all permutations 

    string s="123"; //3! ie 6 permutatuons 
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a, a + n);
    


}

int main(){

    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();

    
    return 0;
}