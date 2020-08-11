#include <bits/stdc++.h>

using namespace std;

#define max_ 1000000

int N;
vector <int> valori;

int prova_casi(){
    int soluzione=max_;
    bool valido= false;
    for (int k=1;k<=N/2;k++){
        if (N%k !=0)
                continue;

        valido=true;
        for(int i=0; i<k+1; i++){
            for(int j=i; j<N; j+=k){
                if(valori[j]!=valori[i])
                    valido=false;
            }
        }
        if(valido){
            return k;
        }
        //cout << divisori.front() << "    " << valido << "    " << soluzione << endl;
    }
        return max_;

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    cin >> N;
    valori.resize(N);
    for(int i=0; i<N; i++){
        cin >> valori[i];
    }
    int soluzione= prova_casi();
    if(soluzione==max_){
        cout << 2;
    }
    else
    {
        for(int i=0; i<soluzione; i++){
            cout << valori[i] <<" ";
        }
    }
    cout << endl;
    return 0;
}
