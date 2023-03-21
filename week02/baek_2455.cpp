#include<iostream>
int main(void){
    int out[4], in[4];
    for(int i=0;i<4;i++)
        std::cin>>out[i]>>in[i];

    int human[4],answer;
    human[0]=0+in[0]-out[0];
    for(int i=1;i<4;i++){
        human[i]=human[i-1]-out[i]+in[i];
        if(human[i]>human[i-1])
            answer=human[i];
    }
    std::cout<<answer;
}
