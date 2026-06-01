#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int opt, val, pos;

    while(true){
        cout<<"\n1.Insert\n2.Delete\n3.Update\n4.Search\n5.Exit\n";
        cin>>opt;

        switch(opt){
            case 1:
                cin>>val;
                v.push_back(val);
                break;

            case 2:
                cin>>pos;
                if(pos>=0 && pos<v.size())
                    v.erase(v.begin()+pos);
                break;

            case 3:
                cin>>pos>>val;
                if(pos>=0 && pos<v.size())
                    v[pos]=val;
                break;

            case 4:
                cin>>val;
                for(int i=0;i<v.size();i++)
                    if(v[i]==val)
                        cout<<"Found at "<<i<<endl;
                break;

            case 5:
                return 0;
        }
    }
}