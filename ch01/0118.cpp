#include<iostream>
int main()
{
    int num=0,val=0;
    if(std::cin>>num)
    {
        int cnt=1;
        while(std::cin>>val)
        {
            if(num==val)
                ++cnt;
            else
            {
                std::cout<<num<<" occurs "<<cnt<<" times "<<std::endl;
                num=val;
                cnt=1;
            }
        }
        std::cout<<num<<" occurs "<<cnt<<" times "<<std::endl;
    }
    return 0;
}
