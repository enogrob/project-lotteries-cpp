#include <iostream>
#include <vector>

using namespace std;

vector<int> quina(int n){
    vector<int> q;

    for(int i=0; i<n; i++){
        q.push_back(rand() % 80 + 1);
    }
    return q;
}

int sum(vector<int> q) {
    int sum=0;

    for(int n : q) {
        sum += n;
    }
    return sum;
}


int main() {
    vector<int> q;

    q = quina(5);

    for(int n : q) {
        cout << n << " ";
    }

    cout << endl;
    cout << sum(q) << endl;

    return 0;
}