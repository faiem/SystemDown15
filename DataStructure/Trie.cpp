#include<cstdio>
#include<iostream>
using namespace std;

struct node{

    bool endMark;
    node *next[26+1];

    node()
    {
        endMark = false;
        for(int I=0;I<26;I++)
            next[I] = NULL;
    }

}*root;

int main()
{

    root = new node();

    cout<< root->endMark <<endl;

    return 0;
}
